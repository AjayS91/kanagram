#! /usr/bin/env bash
$EXTRACTRC `find ./ -name \*.rc -o -name \*.ui -o -name \*.kcfg` >> rc.cpp
$XGETTEXT `find ./ -name \*.cpp -o -name \*.h -o -name \*.qml` -o $podir/kanagram-harmattan.pot
