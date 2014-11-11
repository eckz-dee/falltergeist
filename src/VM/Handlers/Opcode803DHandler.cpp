/*
 * Copyright 2012-2014 Falltergeist Developers.
 *
 * This file is part of Falltergeist.
 *
 * Falltergeist is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Falltergeist is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Falltergeist.  If not, see <http://www.gnu.org/licenses/>.
 */

// C++ standard includes

// Falltergeist includes
#include "../../Engine/Logger.h"
#include "../../VM/Handlers/Opcode803DHandler.h"
#include "../../VM/VM.h"
#include "../../VM/VMStackIntValue.h"

// Third party includes

namespace Falltergeist
{

Opcode803DHandler::Opcode803DHandler(VM* vm) : OpcodeHandler(vm)
{
}

void Opcode803DHandler::_run()
{
     Logger::debug("SCRIPT") << "[803D] [*] mod %" << std::endl;
     auto b = _vm->dataStack()->pop();
     auto a = _vm->dataStack()->pop();
     auto p1 = dynamic_cast<VMStackIntValue*>(a);
     auto p2 = dynamic_cast<VMStackIntValue*>(b);
     _vm->pushDataInteger(p1->value()%p2->value());
}

}