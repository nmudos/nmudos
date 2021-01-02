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

#include "version.h"

using namespace nmudos;

void version::defCommand ( CLI::App& app )
{
    /*
    app.add_option("-v,--version", [](std::vector<std::string> val){
        std::cout << NMUDOS_VERSION << std::endl;
        exit(0);
        return true;
    },"Print the version number of nMudOS");
    */
    app.add_flag("-v,--version", versionFlag, "Print the version number of nMudOS and exit");
}

bool version::runCommand()
{
    if(this->versionFlag)
    {
        std::cout << "nMudOS version " << NMUDOS_VERSION << std::endl << LICENSE << std::endl;
    }
    return versionFlag;
}
