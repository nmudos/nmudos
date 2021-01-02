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

#ifndef NMUDOS_ICOMMAND_H
#define NMUDOS_ICOMMAND_H

#include "../../thirdparty/CLI/CLI.hpp"

namespace nmudos
{

/**
 * @todo write docs
 */
class ICommand
{
public:
    virtual void defCommand(CLI::App &app) = 0;
    virtual bool runCommand() = 0;
};

}

#endif // NMUDOS_ICOMMAND_H
