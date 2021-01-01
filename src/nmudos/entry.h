/*
 * nMudOS is a modern mud game drive.
 * Copyright (C) 2021  https://nmudos.com mebius@ashan.org
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef NMUDOS_ENTRY_H
#define NMUDOS_ENTRY_H

#include "../thirdparty/CLI/CLI.hpp"

#include <iostream>

namespace nmudos
{

/**
 * 驱动运行入口
 */
class entry
{

private:
    CLI::App app{"      ___  ___          _ _____ _____ \n\
      |  \\/  |         | |  _  /  ___| \n\
 _ __ | .  . |_   _  __| | | | \\ `--. \n\
| '_ \\| |\\/| | | | |/ _` | | | |`--. \\ \n\
| | | | |  | | |_| | (_| \\ \\_/ /\\__/ / \n\
|_| |_\\_|  |_/\\__,_|\\__,_|\\___/\\____/  \n\
\n\
nMudOS is a modern mud game drive that is not only compatible with existing \n\
MudOS and FluffOS, but also creatively adds more features, while also allowing \n\
developer's game designers to quickly make mud games using LUA and JavaScript\n\
languages.\n"};
    
private:
    entry();
    ~entry();
    entry(const entry&);
	entry& operator=(const entry&);
    

public:
    
    /**
     * 单例
     */
    static entry& getInstance() 
    {
		static entry instance;
		return instance;
	}
	
	int run(int argc, char **argv); 
    
};

}

#endif // NMUDOS_ENTRY_H
