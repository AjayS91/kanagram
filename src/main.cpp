/***************************************************************************
 *   Copyright (C) 2005 by Joshua Keel  *
 *   joshuakeel@gmail.com   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Steet, Fifth Floor, Boston, MA 02110-1301, USA.             *
 ***************************************************************************/

#include <kaboutdata.h>
#include <kapplication.h>
#include <kcmdlineargs.h>
#include <kprocess.h>
#include <kstandarddirs.h>

#include "kanagram.h"

int main(int argc, char *argv[])
{
	KAboutData about("kanagram", I18N_NOOP("Kanagram"), "0.1", I18N_NOOP("An anagram game"), KAboutData::License_GPL, "© 2005 Joshua Keel\n© 2005 Danny Allen");
	about.addAuthor("Joshua Keel", I18N_NOOP("Coding"), "joshuakeel@gmail.com");
	about.addAuthor("Danny Allen", I18N_NOOP("Design, Graphics and many Vocabularies"), "danny@dannyallen.co.uk");
	about.addCredit("Artemiy Pavlov", I18N_NOOP("Sound effects"), 0, "http://artemiolabs.com");
	KCmdLineArgs::init(argc, argv, &about);
	KApplication app;
	app.connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));
	
	app.setTopWidget(new Kanagram());
	return app.exec();
}

