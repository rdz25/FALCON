[G1SAbsDiffsG1TopTen G1SAbsDiffsSTopTen G1SAbsDiffsTopTenNames ...
G1SRelDiffsZeroG1TopTen G1SRelDiffsZeroSTopTen G1SRelDiffsZeroTopTenNames ...
G1SRelDiffsNonzeroG1TopTen G1SRelDiffsNonzeroSTopTen G1SRelDiffsNonzeroTopTenNames ...
G1SSSAbsDiffsG1TopTen G1SSSAbsDiffsSTopTen G1SSSAbsDiffsTopTenNames ...
G1SSSRelDiffsZeroG1TopTen G1SSSRelDiffsZeroSTopTen G1SSSRelDiffsZeroTopTenNames ...
G1SSSRelDiffsNonzeroG1TopTen G1SSSRelDiffsNonzeroSTopTen G1SSSRelDiffsNonzeroTopTenNames] ...
= analyzeDiffFluxes(origRecon2, 'G1FalconData.txt_falcon_flux.mat', 'SFalconData.txt_falcon_flux.mat', true);

[SG2MAbsDiffsSTopTen SG2MAbsDiffsG2MTopTen SG2MAbsDiffsTopTenNames ...
SG2MRelDiffsZeroSTopTen SG2MRelDiffsZeroG2MTopTen SG2MRelDiffsZeroTopTenNames ...
SG2MRelDiffsNonzeroSTopTen SG2MRelDiffsNonzeroG2MTopTen SG2MRelDiffsNonzeroTopTenNames ...
SG2MSSAbsDiffsSTopTen SG2MSSAbsDiffsG2MTopTen SG2MSSAbsDiffsTopTenNames ...
SG2MSSRelDiffsZeroSTopTen SG2MSSRelDiffsZeroG2MTopTen SG2MSSRelDiffsZeroTopTenNames ...
SG2MSSRelDiffsNonzeroSTopTen SG2MSSRelDiffsNonzeroG2MTopTen SG2MSSRelDiffsNonzeroTopTenNames] ...
= analyzeDiffFluxes(origRecon2, 'SFalconData.txt_falcon_flux.mat', 'G2MFalconData.txt_falcon_flux.mat', true);

[G2MG1AbsDiffsG2MTopTen G2MG1AbsDiffsG1TopTen G2MG1AbsDiffsTopTenNames ...
G2MG1RelDiffsZeroG2MTopTen G2MG1RelDiffsZeroG1TopTen G2MG1RelDiffsZeroTopTenNames ...
G2MG1RelDiffsNonzeroG2MTopTen G2MG1RelDiffsNonzeroG1TopTen G2MG1RelDiffsNonzeroTopTenNames ...
G2MG1SSAbsDiffsG2MTopTen G2MG1SSAbsDiffsG1TopTen G2MG1SSAbsDiffsTopTenNames ...
G2MG1SSRelDiffsZeroG2MTopTen G2MG1SSRelDiffsZeroG1TopTen G2MG1SSRelDiffsZeroTopTenNames ...
G2MG1SSRelDiffsNonzeroG2MTopTen G2MG1SSRelDiffsNonzeroG1TopTen G2MG1SSRelDiffsNonzeroTopTenNames] ...
= analyzeDiffFluxes(origRecon2, 'G2MFalconData.txt_falcon_flux.mat', 'G1FalconData.txt_falcon_flux.mat', true);

save('cycleFluxesExportToPython.mat', ...
'G1SAbsDiffsG1TopTen','G1SAbsDiffsSTopTen','G1SAbsDiffsTopTenNames', ...
'SG2MAbsDiffsSTopTen','SG2MAbsDiffsG2MTopTen','SG2MAbsDiffsTopTenNames', ...
'G1SRelDiffsZeroG1TopTen','G1SRelDiffsZeroSTopTen','G1SRelDiffsZeroTopTenNames',...
'SG2MRelDiffsZeroSTopTen','SG2MRelDiffsZeroG2MTopTen','SG2MRelDiffsZeroTopTenNames',...
'G1SRelDiffsNonzeroG1TopTen','G1SRelDiffsNonzeroSTopTen','G1SRelDiffsNonzeroTopTenNames',...
'SG2MRelDiffsNonzeroSTopTen','SG2MRelDiffsNonzeroG2MTopTen','SG2MRelDiffsNonzeroTopTenNames',...
'G1SSSAbsDiffsG1TopTen', 'G1SSSAbsDiffsSTopTen', 'G1SSSAbsDiffsTopTenNames', ...
'G1SSSRelDiffsZeroG1TopTen', 'G1SSSRelDiffsZeroSTopTen', 'G1SSSRelDiffsZeroTopTenNames', ...
'G1SSSRelDiffsNonzeroG1TopTen', 'G1SSSRelDiffsNonzeroSTopTen', 'G1SSSRelDiffsNonzeroTopTenNames', ...
'SG2MSSAbsDiffsSTopTen', 'SG2MSSAbsDiffsG2MTopTen', 'SG2MSSAbsDiffsTopTenNames', ...
'SG2MSSRelDiffsZeroSTopTen', 'SG2MSSRelDiffsZeroG2MTopTen', 'SG2MSSRelDiffsZeroTopTenNames', ...
'SG2MSSRelDiffsNonzeroSTopTen', 'SG2MSSRelDiffsNonzeroG2MTopTen', 'SG2MSSRelDiffsNonzeroTopTenNames', ...
'G2MG1AbsDiffsG2MTopTen', 'G2MG1AbsDiffsG1TopTen', 'G2MG1AbsDiffsTopTenNames', ...
'G2MG1RelDiffsZeroG2MTopTen', 'G2MG1RelDiffsZeroG1TopTen', 'G2MG1RelDiffsZeroTopTenNames', ...
'G2MG1RelDiffsNonzeroG2MTopTen', 'G2MG1RelDiffsNonzeroG1TopTen', 'G2MG1RelDiffsNonzeroTopTenNames', ...
'G2MG1SSAbsDiffsG2MTopTen', 'G2MG1SSAbsDiffsG1TopTen', 'G2MG1SSAbsDiffsTopTenNames', ...
'G2MG1SSRelDiffsZeroG2MTopTen', 'G2MG1SSRelDiffsZeroG1TopTen', 'G2MG1SSRelDiffsZeroTopTenNames', ...
'G2MG1SSRelDiffsNonzeroG2MTopTen', 'G2MG1SSRelDiffsNonzeroG1TopTen', 'G2MG1SSRelDiffsNonzeroTopTenNames');