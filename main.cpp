#include "pch.h"
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include<algorithm>
#include <time.h>
using namespace std;


int main()
{
	//启动后台服务 调用jar包 
	system("java -Xmx2g -Xms2g -Dgraphhopper.datareader.file=..\\beijing2.osm -jar ..\\graphhopper-web-0.12-SNAPSHOT.jar server ..\\config-example.yml");
}

