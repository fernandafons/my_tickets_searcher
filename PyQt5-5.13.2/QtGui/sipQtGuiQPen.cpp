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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qpen.sip"
#include <qpen.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQPen.cpp"

#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQPen.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQPen.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQPen.cpp"
#line 241 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qpygui_qvector.sip"
#include <qvector.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQPen.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 45 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQPen.cpp"


PyDoc_STRVAR(doc_QPen_style, "style(self) -> Qt.PenStyle");

extern "C" {static PyObject *meth_QPen_style(PyObject *, PyObject *);}
static PyObject *meth_QPen_style(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPen, &sipCpp))
        {
             ::Qt::PenStyle sipRes;

            sipRes = sipCpp->style();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_Qt_PenStyle);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_style, doc_QPen_style);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_setStyle, "setStyle(self, Qt.PenStyle)");

extern "C" {static PyObject *meth_QPen_setStyle(PyObject *, PyObject *);}
static PyObject *meth_QPen_setStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::PenStyle a0;
         ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPen, &sipCpp, sipType_Qt_PenStyle, &a0))
        {
            sipCpp->setStyle(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_setStyle, doc_QPen_setStyle);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_widthF, "widthF(self) -> float");

extern "C" {static PyObject *meth_QPen_widthF(PyObject *, PyObject *);}
static PyObject *meth_QPen_widthF(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPen, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->widthF();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_widthF, doc_QPen_widthF);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_setWidthF, "setWidthF(self, float)");

extern "C" {static PyObject *meth_QPen_setWidthF(PyObject *, PyObject *);}
static PyObject *meth_QPen_setWidthF(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::qreal a0;
         ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPen, &sipCpp, &a0))
        {
            sipCpp->setWidthF(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_setWidthF, doc_QPen_setWidthF);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_width, "width(self) -> int");

extern "C" {static PyObject *meth_QPen_width(PyObject *, PyObject *);}
static PyObject *meth_QPen_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPen, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->width();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_width, doc_QPen_width);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_setWidth, "setWidth(self, int)");

extern "C" {static PyObject *meth_QPen_setWidth(PyObject *, PyObject *);}
static PyObject *meth_QPen_setWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QPen, &sipCpp, &a0))
        {
            sipCpp->setWidth(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_setWidth, doc_QPen_setWidth);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_color, "color(self) -> QColor");

extern "C" {static PyObject *meth_QPen_color(PyObject *, PyObject *);}
static PyObject *meth_QPen_color(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPen, &sipCpp))
        {
             ::QColor*sipRes;

            sipRes = new  ::QColor(sipCpp->color());

            return sipConvertFromNewType(sipRes,sipType_QColor,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_color, doc_QPen_color);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_setColor, "setColor(self, Union[QColor, Qt.GlobalColor, QGradient])");

extern "C" {static PyObject *meth_QPen_setColor(PyObject *, PyObject *);}
static PyObject *meth_QPen_setColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QColor* a0;
        int a0State = 0;
         ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPen, &sipCpp, sipType_QColor, &a0, &a0State))
        {
            sipCpp->setColor(*a0);
            sipReleaseType(const_cast< ::QColor *>(a0),sipType_QColor,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_setColor, doc_QPen_setColor);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_brush, "brush(self) -> QBrush");

extern "C" {static PyObject *meth_QPen_brush(PyObject *, PyObject *);}
static PyObject *meth_QPen_brush(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPen, &sipCpp))
        {
             ::QBrush*sipRes;

            sipRes = new  ::QBrush(sipCpp->brush());

            return sipConvertFromNewType(sipRes,sipType_QBrush,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_brush, doc_QPen_brush);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_setBrush, "setBrush(self, Union[QBrush, QColor, Qt.GlobalColor, QGradient])");

extern "C" {static PyObject *meth_QPen_setBrush(PyObject *, PyObject *);}
static PyObject *meth_QPen_setBrush(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QBrush* a0;
        int a0State = 0;
         ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPen, &sipCpp, sipType_QBrush, &a0, &a0State))
        {
            sipCpp->setBrush(*a0);
            sipReleaseType(const_cast< ::QBrush *>(a0),sipType_QBrush,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_setBrush, doc_QPen_setBrush);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_isSolid, "isSolid(self) -> bool");

extern "C" {static PyObject *meth_QPen_isSolid(PyObject *, PyObject *);}
static PyObject *meth_QPen_isSolid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPen, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isSolid();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_isSolid, doc_QPen_isSolid);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_capStyle, "capStyle(self) -> Qt.PenCapStyle");

extern "C" {static PyObject *meth_QPen_capStyle(PyObject *, PyObject *);}
static PyObject *meth_QPen_capStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPen, &sipCpp))
        {
             ::Qt::PenCapStyle sipRes;

            sipRes = sipCpp->capStyle();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_Qt_PenCapStyle);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_capStyle, doc_QPen_capStyle);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_setCapStyle, "setCapStyle(self, Qt.PenCapStyle)");

extern "C" {static PyObject *meth_QPen_setCapStyle(PyObject *, PyObject *);}
static PyObject *meth_QPen_setCapStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::PenCapStyle a0;
         ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPen, &sipCpp, sipType_Qt_PenCapStyle, &a0))
        {
            sipCpp->setCapStyle(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_setCapStyle, doc_QPen_setCapStyle);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_joinStyle, "joinStyle(self) -> Qt.PenJoinStyle");

extern "C" {static PyObject *meth_QPen_joinStyle(PyObject *, PyObject *);}
static PyObject *meth_QPen_joinStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPen, &sipCpp))
        {
             ::Qt::PenJoinStyle sipRes;

            sipRes = sipCpp->joinStyle();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_Qt_PenJoinStyle);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_joinStyle, doc_QPen_joinStyle);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_setJoinStyle, "setJoinStyle(self, Qt.PenJoinStyle)");

extern "C" {static PyObject *meth_QPen_setJoinStyle(PyObject *, PyObject *);}
static PyObject *meth_QPen_setJoinStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::PenJoinStyle a0;
         ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPen, &sipCpp, sipType_Qt_PenJoinStyle, &a0))
        {
            sipCpp->setJoinStyle(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_setJoinStyle, doc_QPen_setJoinStyle);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_dashPattern, "dashPattern(self) -> List[float]");

extern "C" {static PyObject *meth_QPen_dashPattern(PyObject *, PyObject *);}
static PyObject *meth_QPen_dashPattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPen, &sipCpp))
        {
             ::QVector< ::qreal>*sipRes;

            sipRes = new  ::QVector< ::qreal>(sipCpp->dashPattern());

            return sipConvertFromNewType(sipRes,sipType_QVector_2400,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_dashPattern, doc_QPen_dashPattern);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_setDashPattern, "setDashPattern(self, Iterable[float])");

extern "C" {static PyObject *meth_QPen_setDashPattern(PyObject *, PyObject *);}
static PyObject *meth_QPen_setDashPattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVector< ::qreal>* a0;
        int a0State = 0;
         ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPen, &sipCpp, sipType_QVector_2400,&a0, &a0State))
        {
            sipCpp->setDashPattern(*a0);
            sipReleaseType(const_cast< ::QVector< ::qreal> *>(a0),sipType_QVector_2400,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_setDashPattern, doc_QPen_setDashPattern);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_miterLimit, "miterLimit(self) -> float");

extern "C" {static PyObject *meth_QPen_miterLimit(PyObject *, PyObject *);}
static PyObject *meth_QPen_miterLimit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPen, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->miterLimit();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_miterLimit, doc_QPen_miterLimit);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_setMiterLimit, "setMiterLimit(self, float)");

extern "C" {static PyObject *meth_QPen_setMiterLimit(PyObject *, PyObject *);}
static PyObject *meth_QPen_setMiterLimit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::qreal a0;
         ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPen, &sipCpp, &a0))
        {
            sipCpp->setMiterLimit(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_setMiterLimit, doc_QPen_setMiterLimit);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_dashOffset, "dashOffset(self) -> float");

extern "C" {static PyObject *meth_QPen_dashOffset(PyObject *, PyObject *);}
static PyObject *meth_QPen_dashOffset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPen, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->dashOffset();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_dashOffset, doc_QPen_dashOffset);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_setDashOffset, "setDashOffset(self, float)");

extern "C" {static PyObject *meth_QPen_setDashOffset(PyObject *, PyObject *);}
static PyObject *meth_QPen_setDashOffset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::qreal a0;
         ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPen, &sipCpp, &a0))
        {
            sipCpp->setDashOffset(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_setDashOffset, doc_QPen_setDashOffset);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_isCosmetic, "isCosmetic(self) -> bool");

extern "C" {static PyObject *meth_QPen_isCosmetic(PyObject *, PyObject *);}
static PyObject *meth_QPen_isCosmetic(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPen, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isCosmetic();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_isCosmetic, doc_QPen_isCosmetic);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_setCosmetic, "setCosmetic(self, bool)");

extern "C" {static PyObject *meth_QPen_setCosmetic(PyObject *, PyObject *);}
static PyObject *meth_QPen_setCosmetic(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
         ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QPen, &sipCpp, &a0))
        {
            sipCpp->setCosmetic(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_setCosmetic, doc_QPen_setCosmetic);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPen_swap, "swap(self, QPen)");

extern "C" {static PyObject *meth_QPen_swap(PyObject *, PyObject *);}
static PyObject *meth_QPen_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QPen* a0;
         ::QPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPen, &sipCpp, sipType_QPen, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QPen, sipName_swap, doc_QPen_swap);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QPen___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPen___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QPen *sipCpp = reinterpret_cast< ::QPen *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPen));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPen* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPen, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QPen::operator!=(*a0);
            sipReleaseType(const_cast< ::QPen *>(a0),sipType_QPen,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QPen, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QPen___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPen___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QPen *sipCpp = reinterpret_cast< ::QPen *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPen));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPen* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPen, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QPen::operator==(*a0);
            sipReleaseType(const_cast< ::QPen *>(a0),sipType_QPen,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QPen, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QPen(void *, int);}
static void release_QPen(void *sipCppV, int)
{
    delete reinterpret_cast< ::QPen *>(sipCppV);
}


extern "C" {static void *array_QPen(Py_ssize_t);}
static void *array_QPen(Py_ssize_t sipNrElem)
{
    return new  ::QPen[sipNrElem];
}


extern "C" {static void assign_QPen(void *, Py_ssize_t, void *);}
static void assign_QPen(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QPen *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QPen *>(sipSrc);
}


extern "C" {static void *copy_QPen(const void *, Py_ssize_t);}
static void *copy_QPen(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QPen(reinterpret_cast<const  ::QPen *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPen(sipSimpleWrapper *);}
static void dealloc_QPen(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPen(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QPen(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPen(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QPen *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QPen();

            return sipCpp;
        }
    }

    {
         ::Qt::PenStyle a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "E", sipType_Qt_PenStyle, &a0))
        {
            sipCpp = new  ::QPen(a0);

            return sipCpp;
        }
    }

    {
        const  ::QBrush* a0;
        int a0State = 0;
         ::qreal a1;
         ::Qt::PenStyle a2 = Qt::SolidLine;
         ::Qt::PenCapStyle a3 = Qt::SquareCap;
         ::Qt::PenJoinStyle a4 = Qt::BevelJoin;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            SIP_NULLPTR,
            sipName_style,
            sipName_cap,
            sipName_join,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1d|EEE", sipType_QBrush, &a0, &a0State, &a1, sipType_Qt_PenStyle, &a2, sipType_Qt_PenCapStyle, &a3, sipType_Qt_PenJoinStyle, &a4))
        {
            sipCpp = new  ::QPen(*a0,a1,a2,a3,a4);
            sipReleaseType(const_cast< ::QBrush *>(a0),sipType_QBrush,a0State);

            return sipCpp;
        }
    }

    {
        const  ::QPen* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QPen, &a0, &a0State))
        {
            sipCpp = new  ::QPen(*a0);
            sipReleaseType(const_cast< ::QPen *>(a0),sipType_QPen,a0State);

            return sipCpp;
        }
    }

    {
        const  ::QVariant* a0;
        PyObject *a0Wrapper;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "@J1", &a0Wrapper, sipType_QVariant, &a0, &a0State))
        {
            sipErrorState sipError = sipErrorNone;

#line 67 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qpen.sip"
        if (a0->canConvert<QPen>())
            sipCpp = new QPen(a0->value<QPen>());
        else
            sipError = sipBadCallableArg(0, a0Wrapper);
#line 886 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQPen.cpp"
            sipReleaseType(const_cast< ::QVariant *>(a0),sipType_QVariant,a0State);

            if (sipError == sipErrorNone)
                return sipCpp;

            if (sipUnused)
            {
                Py_XDECREF(*sipUnused);
            }

            sipAddException(sipError, sipParseErr);

            if (sipError == sipErrorFail)
                return SIP_NULLPTR;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QPen(PyObject *, void **, int *, PyObject *);}
static int convertTo_QPen(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QPen **sipCppPtr = reinterpret_cast< ::QPen **>(sipCppPtrV);

#line 30 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qpen.sip"
// SIP doesn't support automatic type convertors so we explicitly allow a
// QColor to be used whenever a QPen is expected.

if (sipIsErr == NULL)
    return (sipCanConvertToType(sipPy, sipType_QPen, SIP_NO_CONVERTORS) ||
            sipCanConvertToType(sipPy, sipType_QColor, 0));

if (sipCanConvertToType(sipPy, sipType_QPen, SIP_NO_CONVERTORS))
{
    *sipCppPtr = reinterpret_cast<QPen *>(sipConvertToType(sipPy, sipType_QPen, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

    return 0;
}

int state;
QColor *c = reinterpret_cast<QColor *>(sipConvertToType(sipPy, sipType_QColor, 0, 0, &state, sipIsErr));

if (*sipIsErr)
{
    sipReleaseType(c, sipType_QColor, state);
    return 0;
}

*sipCppPtr = new QPen(*c);

sipReleaseType(c, sipType_QColor, state);

return sipGetState(sipTransferObj);
#line 942 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQPen.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPen[] = {
    {(void *)slot_QPen___ne__, ne_slot},
    {(void *)slot_QPen___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QPen[] = {
    {sipName_brush, meth_QPen_brush, METH_VARARGS, doc_QPen_brush},
    {sipName_capStyle, meth_QPen_capStyle, METH_VARARGS, doc_QPen_capStyle},
    {sipName_color, meth_QPen_color, METH_VARARGS, doc_QPen_color},
    {sipName_dashOffset, meth_QPen_dashOffset, METH_VARARGS, doc_QPen_dashOffset},
    {sipName_dashPattern, meth_QPen_dashPattern, METH_VARARGS, doc_QPen_dashPattern},
    {sipName_isCosmetic, meth_QPen_isCosmetic, METH_VARARGS, doc_QPen_isCosmetic},
    {sipName_isSolid, meth_QPen_isSolid, METH_VARARGS, doc_QPen_isSolid},
    {sipName_joinStyle, meth_QPen_joinStyle, METH_VARARGS, doc_QPen_joinStyle},
    {sipName_miterLimit, meth_QPen_miterLimit, METH_VARARGS, doc_QPen_miterLimit},
    {sipName_setBrush, meth_QPen_setBrush, METH_VARARGS, doc_QPen_setBrush},
    {sipName_setCapStyle, meth_QPen_setCapStyle, METH_VARARGS, doc_QPen_setCapStyle},
    {sipName_setColor, meth_QPen_setColor, METH_VARARGS, doc_QPen_setColor},
    {sipName_setCosmetic, meth_QPen_setCosmetic, METH_VARARGS, doc_QPen_setCosmetic},
    {sipName_setDashOffset, meth_QPen_setDashOffset, METH_VARARGS, doc_QPen_setDashOffset},
    {sipName_setDashPattern, meth_QPen_setDashPattern, METH_VARARGS, doc_QPen_setDashPattern},
    {sipName_setJoinStyle, meth_QPen_setJoinStyle, METH_VARARGS, doc_QPen_setJoinStyle},
    {sipName_setMiterLimit, meth_QPen_setMiterLimit, METH_VARARGS, doc_QPen_setMiterLimit},
    {sipName_setStyle, meth_QPen_setStyle, METH_VARARGS, doc_QPen_setStyle},
    {sipName_setWidth, meth_QPen_setWidth, METH_VARARGS, doc_QPen_setWidth},
    {sipName_setWidthF, meth_QPen_setWidthF, METH_VARARGS, doc_QPen_setWidthF},
    {sipName_style, meth_QPen_style, METH_VARARGS, doc_QPen_style},
    {sipName_swap, meth_QPen_swap, METH_VARARGS, doc_QPen_swap},
    {sipName_width, meth_QPen_width, METH_VARARGS, doc_QPen_width},
    {sipName_widthF, meth_QPen_widthF, METH_VARARGS, doc_QPen_widthF}
};

PyDoc_STRVAR(doc_QPen, "\1QPen()\n"
"QPen(Qt.PenStyle)\n"
"QPen(Union[QBrush, QColor, Qt.GlobalColor, QGradient], float, style: Qt.PenStyle = Qt.SolidLine, cap: Qt.PenCapStyle = Qt.SquareCap, join: Qt.PenJoinStyle = Qt.BevelJoin)\n"
"QPen(Union[QPen, QColor, Qt.GlobalColor, QGradient])\n"
"QPen(Any)");


static pyqt5ClassPluginDef plugin_QPen = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QPen = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QPen,
        SIP_NULLPTR,
        &plugin_QPen
    },
    {
        sipNameNr_QPen,
        {0, 0, 1},
        24, methods_QPen,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QPen,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QPen,
    init_type_QPen,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QPen,
    assign_QPen,
    array_QPen,
    copy_QPen,
    release_QPen,
    SIP_NULLPTR,
    convertTo_QPen,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
