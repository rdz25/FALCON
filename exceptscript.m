load(['DownloadedTissueSpecific' filesep 'mCADREFiles' filesep 'breast_tumor.mat']);
[cellLinesArray, metsArray, coreTable, FVAVminArray, FVAVmaxArray] = readJainTable();
mA=metsArray;

indices=[]; %indices that have no match
for i=1:length(mA)
    excrxnname=strcat('EX_',strcat(mA{i},'(e)'));
    excrxnind=find(strcmp(excrxnname,breast_tumor.rxns));
    if isempty(excrxnind)   %No match for this met
        indices=[indices i];
    end
end

%which ones have no corresponding reactions AT ALL

mA=cellstr(num2str(zeros(91,1)));   %initialize empty array
for i=1:length(metsArray)           %iterate through metsArray
    met=metsArray{i};
    cut=length(met);
    for c=1:length(met)
        if ~isstrprop(met(c),'alphanum')
            cut=c-1;                %cut off before the non-alphanumeric char, eg trp_L to trp
        end
    end
    mA(i)= cellstr(met(1:cut));     %new metsArray with trimmed met names
end

indicestrim=[]; %indices that have no match even after using a trimmed met name
for i=1:length(mA)
    trimmet=['EX_',strcat(mA{i})];
    
%   Same comparison method, even fewer matches, EX_trp_L(e) is actually a
%   rxn
%     excrxnname=strcat('EX_',strcat(mA{i},'(e)'));
%     excrxnind=find(strcmp(excrxnname,breast_tumor.rxns));
%     if isempty(excrxnind)   %No match for this met
%         indices=[indices i];
%     end

    check=regexp(breast_tumor.rxns,trimmet);    %regexp has loosest definitions of a match, glyc matches w/ EX_glyc_S(e), dunno if that's ok
    if cellfun('isempty', check)       %if no match for met
        indicestrim=[indicestrim i];
    end
end