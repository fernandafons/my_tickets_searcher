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

#include "sipAPIQtCore.h"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qmargins.sip"
#include <qmargins.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQMargins.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQMargins.cpp"


PyDoc_STRVAR(doc_QMargins_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QMargins_isNull(PyObject *, PyObject *);}
static PyObject *meth_QMargins_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMargins, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMargins, sipName_isNull, doc_QMargins_isNull);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMargins_left, "left(self) -> int");

extern "C" {static PyObject *meth_QMargins_left(PyObject *, PyObject *);}
static PyObject *meth_QMargins_left(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMargins, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->left();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMargins, sipName_left, doc_QMargins_left);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMargins_top, "top(self) -> int");

extern "C" {static PyObject *meth_QMargins_top(PyObject *, PyObject *);}
static PyObject *meth_QMargins_top(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMargins, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->top();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMargins, sipName_top, doc_QMargins_top);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMargins_right, "right(self) -> int");

extern "C" {static PyObject *meth_QMargins_right(PyObject *, PyObject *);}
static PyObject *meth_QMargins_right(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMargins, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->right();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMargins, sipName_right, doc_QMargins_right);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMargins_bottom, "bottom(self) -> int");

extern "C" {static PyObject *meth_QMargins_bottom(PyObject *, PyObject *);}
static PyObject *meth_QMargins_bottom(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMargins, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->bottom();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMargins, sipName_bottom, doc_QMargins_bottom);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMargins_setLeft, "setLeft(self, int)");

extern "C" {static PyObject *meth_QMargins_setLeft(PyObject *, PyObject *);}
static PyObject *meth_QMargins_setLeft(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QMargins, &sipCpp, &a0))
        {
            sipCpp->setLeft(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QMargins, sipName_setLeft, doc_QMargins_setLeft);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMargins_setTop, "setTop(self, int)");

extern "C" {static PyObject *meth_QMargins_setTop(PyObject *, PyObject *);}
static PyObject *meth_QMargins_setTop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QMargins, &sipCpp, &a0))
        {
            sipCpp->setTop(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QMargins, sipName_setTop, doc_QMargins_setTop);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMargins_setRight, "setRight(self, int)");

extern "C" {static PyObject *meth_QMargins_setRight(PyObject *, PyObject *);}
static PyObject *meth_QMargins_setRight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QMargins, &sipCpp, &a0))
        {
            sipCpp->setRight(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QMargins, sipName_setRight, doc_QMargins_setRight);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMargins_setBottom, "setBottom(self, int)");

extern "C" {static PyObject *meth_QMargins_setBottom(PyObject *, PyObject *);}
static PyObject *meth_QMargins_setBottom(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::QMargins *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QMargins, &sipCpp, &a0))
        {
            sipCpp->setBottom(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QMargins, sipName_setBottom, doc_QMargins_setBottom);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QMargins___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QMargins *sipCpp = reinterpret_cast< ::QMargins *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMargins));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMargins* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMargins, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QMargins, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QMargins___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QMargins *sipCpp = reinterpret_cast< ::QMargins *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMargins));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMargins* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMargins, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QMargins, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QMargins___add__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMargins* a0;
        const  ::QMargins* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QMargins, &a0, sipType_QMargins, &a1))
        {
             ::QMargins*sipRes;

            sipRes = new  ::QMargins((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_QMargins,SIP_NULLPTR);
        }
    }

    {
        const  ::QMargins* a0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9i", sipType_QMargins, &a0, &a1))
        {
             ::QMargins*sipRes;

            sipRes = new  ::QMargins((*a0 + a1));

            return sipConvertFromNewType(sipRes,sipType_QMargins,SIP_NULLPTR);
        }
    }

    {
        int a0;
        const  ::QMargins* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "iJ9", &a0, sipType_QMargins, &a1))
        {
             ::QMargins*sipRes;

            sipRes = new  ::QMargins((a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_QMargins,SIP_NULLPTR);
        }
    }

    {
        const  ::QMargins* a0;
        const  ::QRect* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QMargins, &a0, sipType_QRect, &a1))
        {
             ::QRect*sipRes;

            sipRes = new  ::QRect((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_QRect,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, add_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QMargins___sub__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMargins* a0;
        const  ::QMargins* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QMargins, &a0, sipType_QMargins, &a1))
        {
             ::QMargins*sipRes;

            sipRes = new  ::QMargins((*a0 - *a1));

            return sipConvertFromNewType(sipRes,sipType_QMargins,SIP_NULLPTR);
        }
    }

    {
        const  ::QMargins* a0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9i", sipType_QMargins, &a0, &a1))
        {
             ::QMargins*sipRes;

            sipRes = new  ::QMargins((*a0 - a1));

            return sipConvertFromNewType(sipRes,sipType_QMargins,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, sub_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QMargins___mul__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMargins* a0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9Xi", sipType_QMargins, &a0, &a1))
        {
             ::QMargins*sipRes;

            sipRes = new  ::QMargins((*a0 * a1));

            return sipConvertFromNewType(sipRes,sipType_QMargins,SIP_NULLPTR);
        }
    }

    {
        const  ::QMargins* a0;
         ::qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QMargins, &a0, &a1))
        {
             ::QMargins*sipRes;

            sipRes = new  ::QMargins((*a0 * a1));

            return sipConvertFromNewType(sipRes,sipType_QMargins,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, mul_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QMargins___truediv__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___truediv__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMargins* a0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9Xi", sipType_QMargins, &a0, &a1))
        {
             ::QMargins*sipRes;

            sipRes = new  ::QMargins((*a0 / a1));

            return sipConvertFromNewType(sipRes,sipType_QMargins,SIP_NULLPTR);
        }
    }

    {
        const  ::QMargins* a0;
         ::qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QMargins, &a0, &a1))
        {
             ::QMargins*sipRes;

            sipRes = new  ::QMargins((*a0 / a1));

            return sipConvertFromNewType(sipRes,sipType_QMargins,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, truediv_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QMargins___neg__(PyObject *);}
static PyObject *slot_QMargins___neg__(PyObject *sipSelf)
{
     ::QMargins *sipCpp = reinterpret_cast< ::QMargins *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMargins));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QMargins*sipRes;

            sipRes = new  ::QMargins(-(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QMargins,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMargins___pos__(PyObject *);}
static PyObject *slot_QMargins___pos__(PyObject *sipSelf)
{
     ::QMargins *sipCpp = reinterpret_cast< ::QMargins *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMargins));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QMargins*sipRes;

            sipRes = new  ::QMargins(+(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QMargins,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMargins___itruediv__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___itruediv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMargins)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMargins *sipCpp = reinterpret_cast< ::QMargins *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMargins));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1Xi", &a0))
        {
            sipCpp-> ::QMargins::operator/=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
         ::qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::QMargins::operator/=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMargins___imul__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMargins)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMargins *sipCpp = reinterpret_cast< ::QMargins *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMargins));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1Xi", &a0))
        {
            sipCpp-> ::QMargins::operator*=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
         ::qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::QMargins::operator*=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMargins___isub__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMargins)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMargins *sipCpp = reinterpret_cast< ::QMargins *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMargins));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMargins* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMargins, &a0))
        {
            sipCpp-> ::QMargins::operator-=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QMargins::operator-=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMargins___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QMargins___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMargins)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMargins *sipCpp = reinterpret_cast< ::QMargins *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMargins));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMargins* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMargins, &a0))
        {
            sipCpp-> ::QMargins::operator+=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QMargins::operator+=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMargins(void *, int);}
static void release_QMargins(void *sipCppV, int)
{
    delete reinterpret_cast< ::QMargins *>(sipCppV);
}


extern "C" {static void *array_QMargins(Py_ssize_t);}
static void *array_QMargins(Py_ssize_t sipNrElem)
{
    return new  ::QMargins[sipNrElem];
}


extern "C" {static void assign_QMargins(void *, Py_ssize_t, void *);}
static void assign_QMargins(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QMargins *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QMargins *>(sipSrc);
}


extern "C" {static void *copy_QMargins(const void *, Py_ssize_t);}
static void *copy_QMargins(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QMargins(reinterpret_cast<const  ::QMargins *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMargins(sipSimpleWrapper *);}
static void dealloc_QMargins(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QMargins(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QMargins(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMargins(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QMargins *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QMargins();

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        int a2;
        int a3;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "iiii", &a0, &a1, &a2, &a3))
        {
            sipCpp = new  ::QMargins(a0,a1,a2,a3);

            return sipCpp;
        }
    }

    {
        const  ::QMargins* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QMargins, &a0))
        {
            sipCpp = new  ::QMargins(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMargins[] = {
    {(void *)slot_QMargins___eq__, eq_slot},
    {(void *)slot_QMargins___ne__, ne_slot},
    {(void *)slot_QMargins___add__, add_slot},
    {(void *)slot_QMargins___sub__, sub_slot},
    {(void *)slot_QMargins___mul__, mul_slot},
    {(void *)slot_QMargins___truediv__, truediv_slot},
    {(void *)slot_QMargins___neg__, neg_slot},
    {(void *)slot_QMargins___pos__, pos_slot},
    {(void *)slot_QMargins___itruediv__, itruediv_slot},
    {(void *)slot_QMargins___imul__, imul_slot},
    {(void *)slot_QMargins___isub__, isub_slot},
    {(void *)slot_QMargins___iadd__, iadd_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QMargins[] = {
    {sipName_bottom, meth_QMargins_bottom, METH_VARARGS, doc_QMargins_bottom},
    {sipName_isNull, meth_QMargins_isNull, METH_VARARGS, doc_QMargins_isNull},
    {sipName_left, meth_QMargins_left, METH_VARARGS, doc_QMargins_left},
    {sipName_right, meth_QMargins_right, METH_VARARGS, doc_QMargins_right},
    {sipName_setBottom, meth_QMargins_setBottom, METH_VARARGS, doc_QMargins_setBottom},
    {sipName_setLeft, meth_QMargins_setLeft, METH_VARARGS, doc_QMargins_setLeft},
    {sipName_setRight, meth_QMargins_setRight, METH_VARARGS, doc_QMargins_setRight},
    {sipName_setTop, meth_QMargins_setTop, METH_VARARGS, doc_QMargins_setTop},
    {sipName_top, meth_QMargins_top, METH_VARARGS, doc_QMargins_top}
};

PyDoc_STRVAR(doc_QMargins, "\1QMargins()\n"
"QMargins(int, int, int, int)\n"
"QMargins(QMargins)");


static pyqt5ClassPluginDef plugin_QMargins = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QMargins = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QMargins,
        SIP_NULLPTR,
        &plugin_QMargins
    },
    {
        sipNameNr_QMargins,
        {0, 0, 1},
        9, methods_QMargins,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QMargins,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QMargins,
    init_type_QMargins,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QMargins,
    assign_QMargins,
    array_QMargins,
    copy_QMargins,
    release_QMargins,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
