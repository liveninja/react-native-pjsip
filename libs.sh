#!/bin/bash
set -e

if ! type "curl" > /dev/null; then 
    echo "Missed curl dependency" >&2; 
    exit 1; 
fi
if ! type "tar" > /dev/null; then 
    echo "Missed tar dependency" >&2; 
    exit 1; 
fi

curl -LO https://github.com/liveninja/react-native-pjsip/releases/download/v1.2.0/VialerPJSIP.zip
unzip VialerPJSIP.zip -d ios/VialerPJSIP.framework || true
rm -rf VialerPJSIP.zip android || true
