#include "Deals.h"
#include <string>
#define BINARY_DIR "D:\\LekS Files\\Ccraft\\cpp_craft_1013\\solutions\\aleks_apalikov\\Crafting 2\\sources\\buffer\\"

int main(int argc, char** argv)
{
	string searchPath = BINARY_DIR;
	string s =  searchPath + "2.4";
	Deals d(s);
	d.createOutput();
	return 0;
}