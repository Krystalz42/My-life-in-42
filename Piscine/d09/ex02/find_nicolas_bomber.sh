(cat annuaire.txt|
grep -i nicolas|
grep -i bomber|
awk -F" " '{print $3}' | grep '[0-9]')

