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

#line 483 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qgenericmatrix.sip"
#include <qgenericmatrix.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQMatrix3x3.cpp"



PyDoc_STRVAR(doc_QMatrix3x3_data, "data(self) -> List[float]");

extern "C" {static PyObject *meth_QMatrix3x3_data(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x3_data(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QMatrix3x3 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix3x3, &sipCpp))
        {
            PyObject * sipRes = SIP_NULLPTR;
            sipErrorState sipError = sipErrorNone;

#line 558 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qgenericmatrix.sip"
        sipError = qtgui_matrixDataAsList(9, sipCpp->constData(), &sipRes);
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQMatrix3x3.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipRes;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMatrix3x3, sipName_data, doc_QMatrix3x3_data);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMatrix3x3_copyDataTo, "copyDataTo(self) -> List[float]");

extern "C" {static PyObject *meth_QMatrix3x3_copyDataTo(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x3_copyDataTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMatrix3x3 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix3x3, &sipCpp))
        {
            PyObject * sipRes = SIP_NULLPTR;
            sipErrorState sipError = sipErrorNone;

#line 563 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qgenericmatrix.sip"
        PYQT_FLOAT values[9];

        sipCpp->copyDataTo(values);
        sipError = qtgui_matrixDataAsList(9, values, &sipRes);
#line 92 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQMatrix3x3.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipRes;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMatrix3x3, sipName_copyDataTo, doc_QMatrix3x3_copyDataTo);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMatrix3x3_isIdentity, "isIdentity(self) -> bool");

extern "C" {static PyObject *meth_QMatrix3x3_isIdentity(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x3_isIdentity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMatrix3x3 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix3x3, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isIdentity();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMatrix3x3, sipName_isIdentity, doc_QMatrix3x3_isIdentity);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMatrix3x3_setToIdentity, "setToIdentity(self)");

extern "C" {static PyObject *meth_QMatrix3x3_setToIdentity(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x3_setToIdentity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QMatrix3x3 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix3x3, &sipCpp))
        {
            sipCpp->setToIdentity();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QMatrix3x3, sipName_setToIdentity, doc_QMatrix3x3_setToIdentity);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMatrix3x3_fill, "fill(self, float)");

extern "C" {static PyObject *meth_QMatrix3x3_fill(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x3_fill(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        float a0;
         ::QMatrix3x3 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_QMatrix3x3, &sipCpp, &a0))
        {
            sipCpp->fill(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QMatrix3x3, sipName_fill, doc_QMatrix3x3_fill);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMatrix3x3_transposed, "transposed(self) -> QMatrix3x3");

extern "C" {static PyObject *meth_QMatrix3x3_transposed(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x3_transposed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMatrix3x3 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix3x3, &sipCpp))
        {
             ::QMatrix3x3*sipRes;

            sipRes = new  ::QMatrix3x3(sipCpp->transposed());

            return sipConvertFromNewType(sipRes,sipType_QMatrix3x3,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMatrix3x3, sipName_transposed, doc_QMatrix3x3_transposed);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QMatrix3x3___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x3___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QMatrix3x3 *sipCpp = reinterpret_cast< ::QMatrix3x3 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x3));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMatrix3x3* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix3x3, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QMatrix3x3::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QMatrix3x3, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QMatrix3x3___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x3___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QMatrix3x3 *sipCpp = reinterpret_cast< ::QMatrix3x3 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x3));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMatrix3x3* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix3x3, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QMatrix3x3::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QMatrix3x3, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QMatrix3x3___itruediv__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x3___itruediv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix3x3)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMatrix3x3 *sipCpp = reinterpret_cast< ::QMatrix3x3 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x3));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        float a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1f", &a0))
        {
            sipCpp-> ::QMatrix3x3::operator/=(a0);

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


extern "C" {static PyObject *slot_QMatrix3x3___imul__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x3___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix3x3)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMatrix3x3 *sipCpp = reinterpret_cast< ::QMatrix3x3 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x3));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        float a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1f", &a0))
        {
            sipCpp-> ::QMatrix3x3::operator*=(a0);

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


extern "C" {static PyObject *slot_QMatrix3x3___isub__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x3___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix3x3)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMatrix3x3 *sipCpp = reinterpret_cast< ::QMatrix3x3 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x3));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMatrix3x3* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix3x3, &a0))
        {
            sipCpp-> ::QMatrix3x3::operator-=(*a0);

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


extern "C" {static PyObject *slot_QMatrix3x3___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x3___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix3x3)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMatrix3x3 *sipCpp = reinterpret_cast< ::QMatrix3x3 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x3));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMatrix3x3* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix3x3, &a0))
        {
            sipCpp-> ::QMatrix3x3::operator+=(*a0);

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


extern "C" {static int slot_QMatrix3x3___setitem__(PyObject *,PyObject *);}
static int slot_QMatrix3x3___setitem__(PyObject *sipSelf,PyObject *sipArgs)
{
     ::QMatrix3x3 *sipCpp = reinterpret_cast< ::QMatrix3x3 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x3));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;
        float a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "P0f", &a0, &a1))
        {
            sipErrorState sipError = sipErrorNone;

#line 585 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qgenericmatrix.sip"
        int row, column;

        if ((sipError = qtgui_matrixParseIndex(a0, 3, 3, &row, &column)) == sipErrorNone)
            sipCpp->operator()(row, column) = a1;
#line 466 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQMatrix3x3.cpp"

            if (sipError == sipErrorFail)
                return -1;

            if (sipError == sipErrorNone)
            {
            return 0;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMatrix3x3, sipName___setitem__, SIP_NULLPTR);

    return -1;
}


extern "C" {static PyObject *slot_QMatrix3x3___getitem__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x3___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QMatrix3x3 *sipCpp = reinterpret_cast< ::QMatrix3x3 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x3));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1P0", &a0))
        {
            PyObject * sipRes = SIP_NULLPTR;
            sipErrorState sipError = sipErrorNone;

#line 571 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qgenericmatrix.sip"
        int row, column;

        if ((sipError = qtgui_matrixParseIndex(a0, 3, 3, &row, &column)) == sipErrorNone)
        {
            sipRes = PyFloat_FromDouble(sipCpp->operator()(row, column));

            if (!sipRes)
                sipError = sipErrorFail;
        }
#line 514 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQMatrix3x3.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipRes;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMatrix3x3, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QMatrix3x3___repr__(PyObject *);}
static PyObject *slot_QMatrix3x3___repr__(PyObject *sipSelf)
{
     ::QMatrix3x3 *sipCpp = reinterpret_cast< ::QMatrix3x3 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x3));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
            PyObject * sipRes = SIP_NULLPTR;

#line 511 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qgenericmatrix.sip"
        bool bad = false;
        int i;
        PyObject *m[9];
        PYQT_FLOAT data[9];

        // The raw data is in column-major order but we want row-major order.
        sipCpp->copyDataTo(data);

        for (i = 0; i < 9; ++i)
        {
            m[i] = PyFloat_FromDouble(data[i]);

            if (!m[i])
                bad = true;
        }

        if (!bad)
        {
#if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromFormat("PyQt5.QtGui.QMatrix3x3("
                    "%R, %R, %R, "
                    "%R, %R, %R, "
                    "%R, %R, %R)",
                    m[0], m[1], m[2],
                    m[3], m[4], m[5],
                    m[6], m[7], m[8]);
#else
            sipRes = PyString_FromString("PyQt5.QtGui.QMatrix3x3(");

            for (i = 0; i < 9; ++i)
            {
                if (i != 0)
                    PyString_ConcatAndDel(&sipRes, PyString_FromString(", "));

                PyString_ConcatAndDel(&sipRes, PyObject_Repr(m[i]));
            }

            PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
#endif
        }

        for (i = 0; i < 9; ++i)
            Py_XDECREF(m[i]);
#line 591 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQMatrix3x3.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMatrix3x3(void *, int);}
static void release_QMatrix3x3(void *sipCppV, int)
{
    delete reinterpret_cast< ::QMatrix3x3 *>(sipCppV);
}


extern "C" {static PyObject *pickle_QMatrix3x3(void *);}
static PyObject *pickle_QMatrix3x3(void *sipCppV)
{
     ::QMatrix3x3 *sipCpp = reinterpret_cast< ::QMatrix3x3 *>(sipCppV);
    PyObject *sipRes;

#line 487 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qgenericmatrix.sip"
        PYQT_FLOAT data[9];

        // We want the data in row-major order.
        sipCpp->copyDataTo(data);

        sipRes = Py_BuildValue((char *)"ddddddddd",
                (double)data[0], (double)data[1], (double)data[2],
                (double)data[3], (double)data[4], (double)data[5],
                (double)data[6], (double)data[7], (double)data[8]);
#line 625 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQMatrix3x3.cpp"

    return sipRes;
}


extern "C" {static void *array_QMatrix3x3(Py_ssize_t);}
static void *array_QMatrix3x3(Py_ssize_t sipNrElem)
{
    return new  ::QMatrix3x3[sipNrElem];
}


extern "C" {static void assign_QMatrix3x3(void *, Py_ssize_t, void *);}
static void assign_QMatrix3x3(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QMatrix3x3 *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QMatrix3x3 *>(sipSrc);
}


extern "C" {static void *copy_QMatrix3x3(const void *, Py_ssize_t);}
static void *copy_QMatrix3x3(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QMatrix3x3(reinterpret_cast<const  ::QMatrix3x3 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMatrix3x3(sipSimpleWrapper *);}
static void dealloc_QMatrix3x3(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QMatrix3x3(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QMatrix3x3(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMatrix3x3(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QMatrix3x3 *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QMatrix3x3();

            return sipCpp;
        }
    }

    {
        const  ::QMatrix3x3* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QMatrix3x3, &a0))
        {
            sipCpp = new  ::QMatrix3x3(*a0);

            return sipCpp;
        }
    }

    {
        PyObject * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "P0", &a0))
        {
            sipErrorState sipError = sipErrorNone;

#line 503 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qgenericmatrix.sip"
        PYQT_FLOAT values[9];

        if ((sipError = qtgui_matrixDataFromSequence(a0, 9, values)) == sipErrorNone)
            sipCpp = new QMatrix3x3(values);
#line 699 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQMatrix3x3.cpp"

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


/* Define this type's Python slots. */
static sipPySlotDef slots_QMatrix3x3[] = {
    {(void *)slot_QMatrix3x3___ne__, ne_slot},
    {(void *)slot_QMatrix3x3___eq__, eq_slot},
    {(void *)slot_QMatrix3x3___itruediv__, itruediv_slot},
    {(void *)slot_QMatrix3x3___imul__, imul_slot},
    {(void *)slot_QMatrix3x3___isub__, isub_slot},
    {(void *)slot_QMatrix3x3___iadd__, iadd_slot},
    {(void *)slot_QMatrix3x3___setitem__, setitem_slot},
    {(void *)slot_QMatrix3x3___getitem__, getitem_slot},
    {(void *)slot_QMatrix3x3___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QMatrix3x3[] = {
    {sipName_copyDataTo, meth_QMatrix3x3_copyDataTo, METH_VARARGS, doc_QMatrix3x3_copyDataTo},
    {sipName_data, meth_QMatrix3x3_data, METH_VARARGS, doc_QMatrix3x3_data},
    {sipName_fill, meth_QMatrix3x3_fill, METH_VARARGS, doc_QMatrix3x3_fill},
    {sipName_isIdentity, meth_QMatrix3x3_isIdentity, METH_VARARGS, doc_QMatrix3x3_isIdentity},
    {sipName_setToIdentity, meth_QMatrix3x3_setToIdentity, METH_VARARGS, doc_QMatrix3x3_setToIdentity},
    {sipName_transposed, meth_QMatrix3x3_transposed, METH_VARARGS, doc_QMatrix3x3_transposed}
};

PyDoc_STRVAR(doc_QMatrix3x3, "\1QMatrix3x3()\n"
"QMatrix3x3(QMatrix3x3)\n"
"QMatrix3x3(Sequence[float])");


static pyqt5ClassPluginDef plugin_QMatrix3x3 = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QMatrix3x3 = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QMatrix3x3,
        SIP_NULLPTR,
        &plugin_QMatrix3x3
    },
    {
        sipNameNr_QMatrix3x3,
        {0, 0, 1},
        6, methods_QMatrix3x3,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QMatrix3x3,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QMatrix3x3,
    init_type_QMatrix3x3,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QMatrix3x3,
    assign_QMatrix3x3,
    array_QMatrix3x3,
    copy_QMatrix3x3,
    release_QMatrix3x3,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    pickle_QMatrix3x3,
    SIP_NULLPTR,
    SIP_NULLPTR
};