/****************************************************************************
 * Main developer, C# developing:                                           *
 * Copyright (C) 2014-2017 by Sergey Zheigurov                              *
 * Russia, Novy Urengoy                                                     *
 * zheigurov@gmail.com                                                      *
 *                                                                          *
 * C# to Qt portation, Linux developing                                     *
 * Copyright (C) 2015-2017 by Eduard Kalinowski                             *
 * Germany, Lower Saxony, Hanover                                           *
 * eduard_kalinowski@yahoo.de                                               *
 *                                                                          *
 * C# project CNC-controller-for-mk1                                        *
 * https://github.com/selenur/CNC-controller-for-mk1                        *
 *                                                                          *
 * The Qt project                                                           *
 * https://github.com/eduard-x/cnc-qt                                       *
 *                                                                          *
 * CNC-Qt is free software; may be distributed and/or modified under the    *
 * terms of the GNU General Public License version 3 as published by the    *
 * Free Software Foundation and appearing in the file LICENSE_GPLv3         *
 * included in the packaging of this file.                                  *
 *                                                                          *
 * This program is distributed in the hope that it will be useful,          *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of           *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            *
 * GNU General Public License for more details.                             *
 *                                                                          *
 * You should have received a copy of the GNU Lesser General Public         *
 * License along with CNC-Qt. If not, see  http://www.gnu.org/licenses      *
 ****************************************************************************/


#ifndef SVIS_H
#define SVIS_H


#include "SettingsDialog.h"
#include "MainWindow.h"
#include "ui_sVis.h"


class MainWindow;


class SettingsVis : public QWidget, public Ui::sVis,  public cTranslator
{
        Q_OBJECT
    public:
        SettingsVis(QWidget *parent = 0);
        ~SettingsVis();
        void getSettings();

    private slots:
        void changeColor();
        void onChangeColor(int i);
        //         void onSaveChange();
        //         void checkedChanged(int state);

    private:
        void translateWidget();

        //           private:
        //         QVector< QVector<QGroupBox*> > grpArr;
        //     private:
        //         MainWindow* parent;
};


#endif // SVIS_H
