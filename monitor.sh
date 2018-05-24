#!/bin/bash
#cd /opt/Project/cnrerd

while true
do
  PID=$(ps -A |awk '/CNR_IDU/{print $1}')
  #echo $PID
  if [ -z $PID ] 
  then
    echo "msg1:process CNR_IDU not exists"
    ./CNR_IDU 1 -qws 2>&1 
  else
    DATE=$(date +%Y_%m_%d)
    FILENAME=./data/rundata${DATE}.csv 
    #echo $FILENAME

    if [ -f $FILENAME ]; then
      SIZE=$( stat -c '%s' $FILENAME )
      #echo $SIZE
      if [ "$SIZE" != "$SIZEBACK" ]; then
        SIZEBACK=$SIZE
      else
        echo "msg2:process CNR_IDU locked"
        killall CNR_IDU
        ./CNR_IDU 1 -qws 2>&1 
      fi
    else
      echo "dir data not exists"
      killall CNR_IDU
      ./CNR_IDU 1 -qws 2>&1 
    fi
  fi

  sleep 2

done




