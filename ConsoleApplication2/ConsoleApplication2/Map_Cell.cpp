#include "stdafx.h"
#include "Map_Cell.h"


Map_Cell::Map_Cell()
{
	has_been_visited = false;
}

bool Map_Cell::get_visited()
{
	return has_been_visited;
}

void Map_Cell::set_visited()
{
	has_been_visited = true;
}


Map_Cell::~Map_Cell()
{
}
