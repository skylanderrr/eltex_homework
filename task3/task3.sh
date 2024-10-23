#!/bin/bash
for num in {1..20}; do
	mkdir ./$num #создаем папки
	echo $num.txt > ./$num/$num.txt #создаем файлы с записью их имени в содержимое
	ln -s ./$num/$num.txt ./$num.txt #создаем симлинки
done
for num in {1..20}; do
	if [[ $num != *4* ]]; then
		rm -r ./$num #не мусорим, удалим файлы вместе с папками
		rm ./$num.txt #симлинки туда же
	elif [[ $num == 14 ]]; then
		echo "Vim используют те, кто не может с него выйти :D" > ./$num.txt #пишем гадости в 14.txt, сократим путь через симлинк
	fi
done
