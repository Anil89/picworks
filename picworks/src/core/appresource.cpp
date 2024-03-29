//
// Copyright (C) 2006-2009  by the original authors of Galaxy
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
  \file appresource.cpp
  \ingroup Core
  \brief This file contains
  - class Core::AppResource implemtation
  \author Cheng Liang <chengliang.soft@gmail.com>
  \date 2009-10-13 Created.
 */

#include <QPainter>

#include "appresource.h"

/*!
  \class Core::AppResource appresource.h
  \brief Application resources.
  This resources set contains global strings and icons used in PicWorks.
  These variables are:
  - enum Icon
  - enum MeasurementUnit
  - enum DpiUnit
  - enum Action
  - QPixmap splashImage
  This class is a singleton class. Your can access its instance using appRes->
  \note DO NOT try to create an instance using its constructor.
  \version 0.0.1
  \author Cheng Liang <chengliang.soft@gmail.com>
  \date 2009-10-13 Created.
 */

/*!
  \def AppRes
  \brief The abbrev for getting instance function.
  This is the abbrev for getting instance. It returns an instance not a pointer.

  \enum Core::AppResource::MeasurementUnit
  \brief An enum type for measurement unit.

  \enum Core::AppResource::DpiUnit
  \brief An enum type of DPI(Dots per Inch).

  \enum Core::AppResource::Action
  \brief An enum type of actions.

  \fn const QString& Core::AppResource::measurementUnitName(int index) const
  \brief Gets the measurement unit name.
  DPI unit names have the same sequence as code.
  \param index the index of name to get
  \return measurement unit name with this index

  \fn const QString& Core::AppResource::dpiUnitName(int index) const
  \brief Gets the DPI unit name.
  Measurement unit names have the same sequence as code.
  \param index the index of name to get
  \return DPI unit name with this index

  \fn const QPixmap& Core::AppResource::grayGridImage() const
  \brief Gets gray grid image.
  The gray grid image is 20px * 20px with two white boards
  and two gray boards. It is just like parts of a chessboard.
  In PicWorks this is used as stand for transparent background.
  \return the gray grid image
 */

/*!
  \internal
  \brief Private constructor.
 */
Core::AppResource::AppResource()
{
    // measurement unit name
    measurementUnitNames[px] = tr("px", "px measurement unit name.");
    measurementUnitNames[cm] = tr("cm", "cm measurement unit name.");

    // DPI unit name
    dpiUnitNames[perInch] = tr("pixel/inch", "pixel/inch measurement unit name.");
    dpiUnitNames[perCm] = tr("pixel/cm", "pixel/cm measurement unit name.");

    // init global constants
    grayGrid = QPixmap(20, 20);
    QPainter painter(&grayGrid);
    painter.fillRect(0, 0, 20, 20, Qt::white);
    painter.fillRect(0, 0, 10, 10, Qt::gray);
    painter.fillRect(10, 10, 10, 10, Qt::gray);
}
