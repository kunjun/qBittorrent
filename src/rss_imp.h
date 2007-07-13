/*
 * Bittorrent Client using Qt4 and libtorrent.
 * Copyright (C) 2006-2007  Christophe Dumez
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
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

#ifndef __RSS_IMP_H__
#define __RSS_IMP_H__

#define REFRESH_MAX_LATENCY 600000

#include <QTimer>
#include "ui_rss.h"
#include "rss.h"
#include "GUI.h"

#define DESCRIPTION_CHILD 0
#define URL_CHILD 1
#define TIME_CHILD 2

class RSSImp : public QWidget, public Ui::RSS{
  Q_OBJECT

  private:
    RssManager rssmanager;

  protected slots:
    void on_addStream_button_clicked();
    void on_delStream_button_clicked();
    void on_refreshAll_button_clicked();
    void on_listStreams_clicked();
    void on_listNews_clicked();
    void on_listNews_doubleClicked();
    void displayRSSListMenu(const QPoint&);
    void moveCurrentItem();
    void deleteStream();
    void renameStream();
    void refreshStream();
    void createStream();
    void updateStreamName(const unsigned short&, const unsigned short&);
    void refreshAllStreams();
    void refreshStreamList();
    void refreshNewsList();
    void refreshTextBrowser();
    short getNumStreamSelected();

  public:
    RSSImp();
    ~RSSImp();
};

#endif
