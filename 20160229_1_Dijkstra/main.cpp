#include <stdio.h>
#include <list>

#include "Dijkstra.h"

void main()
{
	Dijkstra pathFinder;
	pathFinder.Initialize();

	std::list<int> path;
	pathFinder.PathFind(path, 0, 5);

	printf_s("Path : ");
	for ( auto iter = path.cbegin(); iter != path.cend(); ++iter )
	{
		printf_s("%d -> ", *iter);
	}
	printf_s("END\n");

	getchar();
	return;
}