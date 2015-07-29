function modelToRun = nci60ScriptHelper(origRecon2, outputPrefix, inputDir, cellLine, INITFile, mCADREFile)
if strcmp(outputPrefix,'Normal')
    modelToRun = origRecon2;
elseif any(strcmp(outputPrefix,{'iMAT','GIMME','iMATMachado','GIMMEMachado'}))
    load([inputDir filesep 'specificModelsPar' filesep 'specificModel' cellLine outputPrefix '.mat']);
    eval(['modelToRun = specificModel' outputPrefix ';']);
elseif strcmp(outputPrefix,'INIT')
    if ~strcmp(INITFile,'na')
        modelToRun = readCbModel(['DownloadedTissueSpecific' filesep 'INITFiles' filesep INITFile '.xml']);
    end
    load(['DownloadedTissueSpecific' filesep 'INITFiles' filesep 'HMRdatabase2_00.mat']);
    HMRModel = ihuman;
    [~, intersectRxnIdxs, ~] = union(HMRModel.rxns, cellfun(@(x) ['HMR_' x], modelToRun.rxns));
    modelToRun.grRules = HMRModel.grRules(intersectRxnIdxs);
    modelToRun.rxnGeneMat = HMRModel.rxnGeneMat(intersectRxnIdxs,:);
    modelToRun.genes = HMRModel.genes;
    ensemblEntrezData = importdata('AllHumanEnsemblToEntrez.txt');
    ensemblEntrezData.textdata = ensemblEntrezData(2:end,:);
    [~, intersectRxnIdxsA, intersectRxnIdxsB] = union(modelToRun.genes, ensemblEntrezData.textdata);
    modelToRun.genes{intersectRxnIdxsA} = num2str(ensemblEntrezData.data(intersectRxnIdxsB));
else%this seems like it would load the .mat but something's wrong?
    if ~strcmp(mCADREFile,'na') %for mCadreFilesArray{1} it is 'na' which causes it to not load?
        load(['DownloadedTissueSpecific' filesep 'mCADREFiles' filesep mCADREFile '.mat']);
        eval(['modelToRun = ' mCADREFile ';']);
    end
end
% 
% if strcmp(outputPrefix, 'INIT') || strcmp(outputPrefix,'mCADRE')
%     [~, intersectMetIdxsA, intersectMetIdxsB] = union(origRecon2.metFormulas,modelToRun.metFormulas);
%     modelToRun.mets{intersectMetIdxsA} = num2str(origRecon2.mets{intersectMetIdxsB});   %num2str not enough input arguments (old error? no longer shows up)
%     %The right hand side of this assignment has too few values to satisfy the left hand side.
%     modelToRun.metNames{intersectMetIdxsA} = num2str(origRecon2.metNames{intersectMetIdxsB});
% end
% end