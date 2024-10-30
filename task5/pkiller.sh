#/bin/bash
echo "Введите наименование процесса:"
read STR
echo ""
ps aux | grep $STR | awk '{print $2, substr($0, index($0,$11))}' | while read pid proccom; do
	if ps -p $pid > /dev/null; then # проверяем жив ли процесс, а то каша получается
		kill -9 $pid
		echo "Процесс $pid команда: $proccom убит"
	fi
done

