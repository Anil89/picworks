//
// Copyright (C) 2006-2010  by the original authors of Galaxy
// and all its contributors ("Galaxy.org").
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

/*!
  \file actionmanager.cpp
  \ingroup Utilities
  \brief This file contains
  - class Core::ActionManager implemtation
  \author Cheng Liang <chengliang.soft@gmail.com>
  \date 2010-4-17 Created.
 */

#include "actionmanager.h"

/*!
  \class Core::ActionManager actionmanager.h
  \brief Application action manager.
  Actions used in PicWorks should be added into this manager. This manager
  should not get instance by using new operater, call
  \a Core::AppContext::instance().actionManager() instead.
  \version 0.0.1
  \author Cheng Liang <chengliang.soft@gmail.com>
  \date 2009-10-14 Created.
 */