echo CREATING GAME
set gameNamae=%1
set solutionName=%2

devtools\bin\kpc.exe /%gameNamae% +game +shaders /mksln %solutionName%.sln
pause