/**************************************************************************
* Otter Browser: Web browser controlled by the user, not vice-versa.
* Copyright (C) 2013 - 2014 Michal Dutkiewicz aka Emdek <michal@emdek.pl>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
**************************************************************************/

#ifndef OTTER_WEBSITEPREFERENCESDIALOG_H
#define OTTER_WEBSITEPREFERENCESDIALOG_H

#include <QtNetwork/QNetworkCookie>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QDialog>

namespace Otter
{

namespace Ui
{
	class WebsitePreferencesDialog;
}

class WebsitePreferencesDialog : public QDialog
{
	Q_OBJECT

public:
	explicit WebsitePreferencesDialog(const QUrl &url, const QList<QNetworkCookie> &cookies, QWidget *parent = 0);
	~WebsitePreferencesDialog();

protected:
	void changeEvent(QEvent *event);

protected slots:
	void buttonClicked(QAbstractButton *button);

private:
	Ui::WebsitePreferencesDialog *m_ui;
};

}

#endif
