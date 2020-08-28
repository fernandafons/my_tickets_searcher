/*
 * Interface wrapper code.
 *
 * Generated by SIP 5.3.0
 *
 * Copyright (c) 2019 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtWidgets.h"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qtooltip.sip"
#include <qtooltip.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQToolTip.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQToolTip.cpp"
#line 26 "sip/QtGui/qfont.sip"
#include <qfont.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQToolTip.cpp"
#line 26 "sip/QtGui/qpalette.sip"
#include <qpalette.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQToolTip.cpp"
#line 26 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQToolTip.cpp"
#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 45 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQToolTip.cpp"
#line 26 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 48 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQToolTip.cpp"


PyDoc_STRVAR(doc_QToolTip_showText, "showText(QPoint, str, widget: QWidget = None)\n"
"showText(QPoint, str, QWidget, QRect)\n"
"showText(QPoint, str, QWidget, QRect, int)");

extern "C" {static PyObject *meth_QToolTip_showText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QToolTip_showText(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPoint* a0;
        const  ::QString* a1;
        int a1State = 0;
         ::QWidget* a2 = 0;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            SIP_NULLPTR,
            sipName_widget,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J9J1|J8", sipType_QPoint, &a0, sipType_QString,&a1, &a1State, sipType_QWidget, &a2))
        {
             ::QToolTip::showText(*a0,*a1,a2);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QPoint* a0;
        const  ::QString* a1;
        int a1State = 0;
         ::QWidget* a2;
        const  ::QRect* a3;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "J9J1J8J9", sipType_QPoint, &a0, sipType_QString,&a1, &a1State, sipType_QWidget, &a2, sipType_QRect, &a3))
        {
             ::QToolTip::showText(*a0,*a1,a2,*a3);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QPoint* a0;
        const  ::QString* a1;
        int a1State = 0;
         ::QWidget* a2;
        const  ::QRect* a3;
        int a4;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "J9J1J8J9i", sipType_QPoint, &a0, sipType_QString,&a1, &a1State, sipType_QWidget, &a2, sipType_QRect, &a3, &a4))
        {
             ::QToolTip::showText(*a0,*a1,a2,*a3,a4);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_showText, doc_QToolTip_showText);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QToolTip_palette, "palette() -> QPalette");

extern "C" {static PyObject *meth_QToolTip_palette(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_palette(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QPalette*sipRes;

            sipRes = new  ::QPalette( ::QToolTip::palette());

            return sipConvertFromNewType(sipRes,sipType_QPalette,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_palette, doc_QToolTip_palette);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QToolTip_hideText, "hideText()");

extern "C" {static PyObject *meth_QToolTip_hideText(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_hideText(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QToolTip::hideText();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_hideText, doc_QToolTip_hideText);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QToolTip_setPalette, "setPalette(QPalette)");

extern "C" {static PyObject *meth_QToolTip_setPalette(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_setPalette(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPalette* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QPalette, &a0))
        {
             ::QToolTip::setPalette(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_setPalette, doc_QToolTip_setPalette);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QToolTip_font, "font() -> QFont");

extern "C" {static PyObject *meth_QToolTip_font(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_font(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QFont*sipRes;

            sipRes = new  ::QFont( ::QToolTip::font());

            return sipConvertFromNewType(sipRes,sipType_QFont,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_font, doc_QToolTip_font);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QToolTip_setFont, "setFont(QFont)");

extern "C" {static PyObject *meth_QToolTip_setFont(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_setFont(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QFont* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QFont, &a0))
        {
             ::QToolTip::setFont(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_setFont, doc_QToolTip_setFont);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QToolTip_isVisible, "isVisible() -> bool");

extern "C" {static PyObject *meth_QToolTip_isVisible(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_isVisible(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            sipRes =  ::QToolTip::isVisible();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_isVisible, doc_QToolTip_isVisible);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QToolTip_text, "text() -> str");

extern "C" {static PyObject *meth_QToolTip_text(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_text(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QToolTip::text());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_text, doc_QToolTip_text);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QToolTip(void *, int);}
static void release_QToolTip(void *sipCppV, int)
{
    delete reinterpret_cast< ::QToolTip *>(sipCppV);
}


extern "C" {static void assign_QToolTip(void *, Py_ssize_t, void *);}
static void assign_QToolTip(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QToolTip *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QToolTip *>(sipSrc);
}


extern "C" {static void *copy_QToolTip(const void *, Py_ssize_t);}
static void *copy_QToolTip(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QToolTip(reinterpret_cast<const  ::QToolTip *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QToolTip(sipSimpleWrapper *);}
static void dealloc_QToolTip(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QToolTip(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QToolTip(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QToolTip(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QToolTip *sipCpp = SIP_NULLPTR;

    {
        const  ::QToolTip* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QToolTip, &a0))
        {
            sipCpp = new  ::QToolTip(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QToolTip[] = {
    {sipName_font, meth_QToolTip_font, METH_VARARGS, doc_QToolTip_font},
    {sipName_hideText, meth_QToolTip_hideText, METH_VARARGS, doc_QToolTip_hideText},
    {sipName_isVisible, meth_QToolTip_isVisible, METH_VARARGS, doc_QToolTip_isVisible},
    {sipName_palette, meth_QToolTip_palette, METH_VARARGS, doc_QToolTip_palette},
    {sipName_setFont, meth_QToolTip_setFont, METH_VARARGS, doc_QToolTip_setFont},
    {sipName_setPalette, meth_QToolTip_setPalette, METH_VARARGS, doc_QToolTip_setPalette},
    {sipName_showText, SIP_MLMETH_CAST(meth_QToolTip_showText), METH_VARARGS|METH_KEYWORDS, doc_QToolTip_showText},
    {sipName_text, meth_QToolTip_text, METH_VARARGS, doc_QToolTip_text}
};

PyDoc_STRVAR(doc_QToolTip, "\1QToolTip(QToolTip)");


static pyqt5ClassPluginDef plugin_QToolTip = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QToolTip = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QToolTip,
        SIP_NULLPTR,
        &plugin_QToolTip
    },
    {
        sipNameNr_QToolTip,
        {0, 0, 1},
        8, methods_QToolTip,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QToolTip,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QToolTip,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QToolTip,
    assign_QToolTip,
    SIP_NULLPTR,
    copy_QToolTip,
    release_QToolTip,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};