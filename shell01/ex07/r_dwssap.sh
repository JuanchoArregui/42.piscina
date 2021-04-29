cat /etc/passwd | grep -v -e "#" | awk "NR % 2 == 0" |cut -d ':' -f1 | rev | sort -rn | awk "NR>=$FT_LINE1 && FNR<=$FT_LINE2" | tr '\n' ' ' | sed 's: :, :g' | sed 's/..$/./' | tr -d '\n'
