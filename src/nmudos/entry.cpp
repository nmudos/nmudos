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

#include "entry.h"
#include "command/command.h"

using namespace nmudos;

entry::entry()
{
    numdos::command::getInstance().init(this->app);
}

entry::~entry()
{

}

entry::entry(const entry&)
{
    
}

/*
entry& operator=(const entry&)
{
    
}
*/

int entry::run(int argc, char **argv)
{
    CLI11_PARSE(this->app, argc, argv);
    numdos::command::getInstance().run();
    this->app.callback([&]() {
        std::cout << "rukou" << std::endl;
    });
    return 0;
}
