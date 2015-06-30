inputDirs = {['NCI60Sims' filesep 'nci60prot']};
%    ['NCI60Sims' filesep 'nci60prot'],['NCI60Sims' filesep 'nci60prot_mRNA']};
[cellLinesArray, ~, ~] = readJainTable();

for i=1:length(inputDirs)
    inputDir = inputDirs{i};
    inputFiles = dir(inputDir);
    outputDir = [inputDir filesep 'specificModelsPar' ];
    if ~exist(outputDir,'dir')
        system(['mkdir ' outputDir]);
    end
    
    parfor k=1:length(cellLinesArray)
        initCobraToolbox;
        cellLinesArray{k}
        totalData = importdata([inputDir filesep cellLinesArray{k} '.csv']);
        [expressionIDsMachado, expressionDataMachado, ~] = ...
        readExpressionFile([inputDir filesep cellLinesArray{k} '.csv']);
        
        makeTissueSpecificModels(outputDir, cellLinesArray{k}, origRecon2, ...
            expressionIDsMachado, expressionDataMachado);
    end
end