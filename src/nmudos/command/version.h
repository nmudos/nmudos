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

#ifndef NMUDOS_VERSION_H
#define NMUDOS_VERSION_H

#include "../../thirdparty/CLI/CLI.hpp"
#include "icommand.h"
#include "../config.h"

namespace nmudos
{

/**
 * @todo write docs
 */
class version : public ICommand
{
public:
    virtual void defCommand(CLI::App &app);
};

}

#endif // NMUDOS_VERSION_H
