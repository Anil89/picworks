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
  \file action.h
  \ingroup Utilities
  \brief This file contains
  - class Core::Action declaration
  \author Cheng Liang <changliang.soft@gmail.com>
  \date 2010-4-21 Created.
 */

#ifndef ACTION_H
#define ACTION_H

#include <QObject>
#include <QAction>

class QVariant;

namespace Core {

class Action : public QObject
{
public:
    Action(QAction *a = 0);
    ~Action();

    inline QAction* action() const { return qa; }

    inline void setAction(QAction *a) { qa = a; }

    inline QVariant data() { return qa->data(); }

    inline void setData(const QVariant &d) { qa->setData(d); }

    inline void setText(const QString &text) { qa->setText(text); }

private:
    QAction *qa;
}; // end of class

} // end of namespace

#endif // ACTION_H
