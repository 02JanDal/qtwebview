/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the QtWebView module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms and
** conditions see http://www.qt.io/terms-conditions. For further information
** use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or later as published by the Free
** Software Foundation and appearing in the file LICENSE.GPL included in
** the packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 2.0 requirements will be
** met: http://www.gnu.org/licenses/gpl-2.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QQUICKWEBVIEWREQUEST_H
#define QQUICKWEBVIEWREQUEST_H

#include "qquickwebview.h"
#include <QtWebView/qwebview_global.h>
#include <QObject>

QT_BEGIN_NAMESPACE

class QWebViewLoadRequestPrivate;

class Q_WEBVIEW_EXPORT QQuickWebViewLoadRequest : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QUrl url READ url)
    Q_PROPERTY(QQuickWebView::LoadStatus status READ status)
    Q_PROPERTY(QString errorString READ errorString)

public:
    ~QQuickWebViewLoadRequest();

    QUrl url() const;
    QQuickWebView::LoadStatus status() const;
    QString errorString() const;

private:
    friend class QQuickWebView;
    explicit QQuickWebViewLoadRequest(const QWebViewLoadRequestPrivate &d);
    Q_DECLARE_PRIVATE(QWebViewLoadRequest)
    QScopedPointer<QWebViewLoadRequestPrivate> d_ptr;
};

QT_END_NAMESPACE

#endif // QQUICKWEBVIEWREQUEST_H
