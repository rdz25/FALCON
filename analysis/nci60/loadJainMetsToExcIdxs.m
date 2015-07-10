function jainMetsToExcIdxs = loadJainMetsToExcIdxs(jainMetsArray,model)
jainMetsToExcIdxs=containers.Map;
for i=1:length(jainMetsArray)
    if(strcmp(jainMetsArray{i},'glc_D'))
        excrxnname='EX_glc(e)';
        excrxnind=find(strcmp(excrxnname,model.rxns));
        jainMetsToExcIdxs(jainMetsArray{i})=excrxnind;
    elseif(strcmp(jainMetsArray{i},'N/A'))
        excrxnname='';
        excrxnind=0;
        jainMetsToExcIdxs(jainMetsArray{i})=excrxnind;
    else
        excrxnname=strcat('EX_',strcat(jainMetsArray{i},'(e)'));
        excrxnind=find(strcmp(excrxnname,model.rxns));
        jainMetsToExcIdxs(jainMetsArray{i})=excrxnind;
    end
end
end

