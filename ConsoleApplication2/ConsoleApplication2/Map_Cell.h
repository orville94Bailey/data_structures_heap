#pragma once
class Map_Cell
{
public:
	Map_Cell();
	bool get_visited();
	void set_visited();
	~Map_Cell();
private:
	bool has_been_visited;
};

