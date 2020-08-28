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

#include "sipAPIQtGui.h"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextItem.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextItem.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextItem.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextItem.cpp"


PyDoc_STRVAR(doc_QTextItem_descent, "descent(self) -> float");

extern "C" {static PyObject *meth_QTextItem_descent(PyObject *, PyObject *);}
static PyObject *meth_QTextItem_descent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextItem, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->descent();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextItem, sipName_descent, doc_QTextItem_descent);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextItem_ascent, "ascent(self) -> float");

extern "C" {static PyObject *meth_QTextItem_ascent(PyObject *, PyObject *);}
static PyObject *meth_QTextItem_ascent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextItem, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->ascent();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextItem, sipName_ascent, doc_QTextItem_ascent);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextItem_width, "width(self) -> float");

extern "C" {static PyObject *meth_QTextItem_width(PyObject *, PyObject *);}
static PyObject *meth_QTextItem_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextItem, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->width();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextItem, sipName_width, doc_QTextItem_width);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextItem_renderFlags, "renderFlags(self) -> QTextItem.RenderFlags");

extern "C" {static PyObject *meth_QTextItem_renderFlags(PyObject *, PyObject *);}
static PyObject *meth_QTextItem_renderFlags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextItem, &sipCpp))
        {
             ::QTextItem::RenderFlags*sipRes;

            sipRes = new  ::QTextItem::RenderFlags(sipCpp->renderFlags());

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextItem, sipName_renderFlags, doc_QTextItem_renderFlags);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextItem_text, "text(self) -> str");

extern "C" {static PyObject *meth_QTextItem_text(PyObject *, PyObject *);}
static PyObject *meth_QTextItem_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextItem, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->text());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextItem, sipName_text, doc_QTextItem_text);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextItem_font, "font(self) -> QFont");

extern "C" {static PyObject *meth_QTextItem_font(PyObject *, PyObject *);}
static PyObject *meth_QTextItem_font(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextItem, &sipCpp))
        {
             ::QFont*sipRes;

            sipRes = new  ::QFont(sipCpp->font());

            return sipConvertFromNewType(sipRes,sipType_QFont,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextItem, sipName_font, doc_QTextItem_font);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextItem(void *, int);}
static void release_QTextItem(void *sipCppV, int)
{
    delete reinterpret_cast< ::QTextItem *>(sipCppV);
}


extern "C" {static void *array_QTextItem(Py_ssize_t);}
static void *array_QTextItem(Py_ssize_t sipNrElem)
{
    return new  ::QTextItem[sipNrElem];
}


extern "C" {static void assign_QTextItem(void *, Py_ssize_t, void *);}
static void assign_QTextItem(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QTextItem *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QTextItem *>(sipSrc);
}


extern "C" {static void *copy_QTextItem(const void *, Py_ssize_t);}
static void *copy_QTextItem(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QTextItem(reinterpret_cast<const  ::QTextItem *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextItem(sipSimpleWrapper *);}
static void dealloc_QTextItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTextItem(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QTextItem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextItem(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QTextItem *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QTextItem();

            return sipCpp;
        }
    }

    {
        const  ::QTextItem* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QTextItem, &a0))
        {
            sipCpp = new  ::QTextItem(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QTextItem[] = {
    {sipName_ascent, meth_QTextItem_ascent, METH_VARARGS, doc_QTextItem_ascent},
    {sipName_descent, meth_QTextItem_descent, METH_VARARGS, doc_QTextItem_descent},
    {sipName_font, meth_QTextItem_font, METH_VARARGS, doc_QTextItem_font},
    {sipName_renderFlags, meth_QTextItem_renderFlags, METH_VARARGS, doc_QTextItem_renderFlags},
    {sipName_text, meth_QTextItem_text, METH_VARARGS, doc_QTextItem_text},
    {sipName_width, meth_QTextItem_width, METH_VARARGS, doc_QTextItem_width}
};

static sipEnumMemberDef enummembers_QTextItem[] = {
    {sipName_Overline, static_cast<int>( ::QTextItem::Overline), 321},
    {sipName_RightToLeft, static_cast<int>( ::QTextItem::RightToLeft), 321},
    {sipName_StrikeOut, static_cast<int>( ::QTextItem::StrikeOut), 321},
    {sipName_Underline, static_cast<int>( ::QTextItem::Underline), 321},
};

PyDoc_STRVAR(doc_QTextItem, "\1QTextItem()\n"
"QTextItem(QTextItem)");


static pyqt5ClassPluginDef plugin_QTextItem = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QTextItem = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTextItem,
        SIP_NULLPTR,
        &plugin_QTextItem
    },
    {
        sipNameNr_QTextItem,
        {0, 0, 1},
        6, methods_QTextItem,
        4, enummembers_QTextItem,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QTextItem,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QTextItem,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QTextItem,
    assign_QTextItem,
    array_QTextItem,
    copy_QTextItem,
    release_QTextItem,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};