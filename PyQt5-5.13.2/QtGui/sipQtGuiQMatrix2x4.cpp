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

#line 781 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qgenericmatrix.sip"
#include <qgenericmatrix.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQMatrix2x4.cpp"

#line 179 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qgenericmatrix.sip"
#include <qgenericmatrix.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQMatrix2x4.cpp"


PyDoc_STRVAR(doc_QMatrix2x4_data, "data(self) -> List[float]");

extern "C" {static PyObject *meth_QMatrix2x4_data(PyObject *, PyObject *);}
static PyObject *meth_QMatrix2x4_data(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QMatrix2x4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix2x4, &sipCpp))
        {
            PyObject * sipRes = SIP_NULLPTR;
            sipErrorState sipError = sipErrorNone;

#line 853 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qgenericmatrix.sip"
        sipError = qtgui_matrixDataAsList(8, sipCpp->constData(), &sipRes);
#line 54 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQMatrix2x4.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipRes;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMatrix2x4, sipName_data, doc_QMatrix2x4_data);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMatrix2x4_copyDataTo, "copyDataTo(self) -> List[float]");

extern "C" {static PyObject *meth_QMatrix2x4_copyDataTo(PyObject *, PyObject *);}
static PyObject *meth_QMatrix2x4_copyDataTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMatrix2x4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix2x4, &sipCpp))
        {
            PyObject * sipRes = SIP_NULLPTR;
            sipErrorState sipError = sipErrorNone;

#line 858 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qgenericmatrix.sip"
        PYQT_FLOAT values[8];

        sipCpp->copyDataTo(values);
        sipError = qtgui_matrixDataAsList(8, values, &sipRes);
#line 95 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQMatrix2x4.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipRes;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMatrix2x4, sipName_copyDataTo, doc_QMatrix2x4_copyDataTo);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMatrix2x4_isIdentity, "isIdentity(self) -> bool");

extern "C" {static PyObject *meth_QMatrix2x4_isIdentity(PyObject *, PyObject *);}
static PyObject *meth_QMatrix2x4_isIdentity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMatrix2x4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix2x4, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isIdentity();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMatrix2x4, sipName_isIdentity, doc_QMatrix2x4_isIdentity);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMatrix2x4_setToIdentity, "setToIdentity(self)");

extern "C" {static PyObject *meth_QMatrix2x4_setToIdentity(PyObject *, PyObject *);}
static PyObject *meth_QMatrix2x4_setToIdentity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QMatrix2x4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix2x4, &sipCpp))
        {
            sipCpp->setToIdentity();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QMatrix2x4, sipName_setToIdentity, doc_QMatrix2x4_setToIdentity);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMatrix2x4_fill, "fill(self, float)");

extern "C" {static PyObject *meth_QMatrix2x4_fill(PyObject *, PyObject *);}
static PyObject *meth_QMatrix2x4_fill(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        float a0;
         ::QMatrix2x4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_QMatrix2x4, &sipCpp, &a0))
        {
            sipCpp->fill(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QMatrix2x4, sipName_fill, doc_QMatrix2x4_fill);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QMatrix2x4_transposed, "transposed(self) -> QMatrix4x2");

extern "C" {static PyObject *meth_QMatrix2x4_transposed(PyObject *, PyObject *);}
static PyObject *meth_QMatrix2x4_transposed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMatrix2x4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix2x4, &sipCpp))
        {
             ::QMatrix4x2*sipRes;

            sipRes = new  ::QMatrix4x2(sipCpp->transposed());

            return sipConvertFromNewType(sipRes,sipType_QMatrix4x2,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMatrix2x4, sipName_transposed, doc_QMatrix2x4_transposed);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QMatrix2x4___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix2x4___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QMatrix2x4 *sipCpp = reinterpret_cast< ::QMatrix2x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x4));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMatrix2x4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix2x4, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QMatrix2x4::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QMatrix2x4, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QMatrix2x4___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix2x4___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QMatrix2x4 *sipCpp = reinterpret_cast< ::QMatrix2x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x4));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMatrix2x4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix2x4, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QMatrix2x4::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QMatrix2x4, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QMatrix2x4___itruediv__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix2x4___itruediv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix2x4)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMatrix2x4 *sipCpp = reinterpret_cast< ::QMatrix2x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x4));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        float a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1f", &a0))
        {
            sipCpp-> ::QMatrix2x4::operator/=(a0);

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


extern "C" {static PyObject *slot_QMatrix2x4___imul__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix2x4___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix2x4)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMatrix2x4 *sipCpp = reinterpret_cast< ::QMatrix2x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x4));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        float a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1f", &a0))
        {
            sipCpp-> ::QMatrix2x4::operator*=(a0);

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


extern "C" {static PyObject *slot_QMatrix2x4___isub__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix2x4___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix2x4)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMatrix2x4 *sipCpp = reinterpret_cast< ::QMatrix2x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x4));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMatrix2x4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix2x4, &a0))
        {
            sipCpp-> ::QMatrix2x4::operator-=(*a0);

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


extern "C" {static PyObject *slot_QMatrix2x4___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix2x4___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix2x4)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMatrix2x4 *sipCpp = reinterpret_cast< ::QMatrix2x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x4));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QMatrix2x4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix2x4, &a0))
        {
            sipCpp-> ::QMatrix2x4::operator+=(*a0);

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


extern "C" {static int slot_QMatrix2x4___setitem__(PyObject *,PyObject *);}
static int slot_QMatrix2x4___setitem__(PyObject *sipSelf,PyObject *sipArgs)
{
     ::QMatrix2x4 *sipCpp = reinterpret_cast< ::QMatrix2x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x4));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;
        float a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "P0f", &a0, &a1))
        {
            sipErrorState sipError = sipErrorNone;

#line 880 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qgenericmatrix.sip"
        int row, column;

        if ((sipError = qtgui_matrixParseIndex(a0, 2, 4, &row, &column)) == sipErrorNone)
            sipCpp->operator()(row, column) = a1;
#line 469 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQMatrix2x4.cpp"

            if (sipError == sipErrorFail)
                return -1;

            if (sipError == sipErrorNone)
            {
            return 0;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMatrix2x4, sipName___setitem__, SIP_NULLPTR);

    return -1;
}


extern "C" {static PyObject *slot_QMatrix2x4___getitem__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix2x4___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QMatrix2x4 *sipCpp = reinterpret_cast< ::QMatrix2x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x4));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1P0", &a0))
        {
            PyObject * sipRes = SIP_NULLPTR;
            sipErrorState sipError = sipErrorNone;

#line 866 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qgenericmatrix.sip"
        int row, column;

        if ((sipError = qtgui_matrixParseIndex(a0, 2, 4, &row, &column)) == sipErrorNone)
        {
            sipRes = PyFloat_FromDouble(sipCpp->operator()(row, column));

            if (!sipRes)
                sipError = sipErrorFail;
        }
#line 517 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQMatrix2x4.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipRes;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    sipNoMethod(sipParseErr, sipName_QMatrix2x4, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QMatrix2x4___repr__(PyObject *);}
static PyObject *slot_QMatrix2x4___repr__(PyObject *sipSelf)
{
     ::QMatrix2x4 *sipCpp = reinterpret_cast< ::QMatrix2x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x4));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
            PyObject * sipRes = SIP_NULLPTR;

#line 808 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qgenericmatrix.sip"
        bool bad = false;
        int i;
        PyObject *m[8];
        PYQT_FLOAT data[8];

        // The raw data is in column-major order but we want row-major order.
        sipCpp->copyDataTo(data);

        for (i = 0; i < 8; ++i)
        {
            m[i] = PyFloat_FromDouble(data[i]);

            if (!m[i])
                bad = true;
        }

        if (!bad)
        {
#if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromFormat("PyQt5.QtGui.QMatrix2x4("
                    "%R, %R, %R, %R, "
                    "%R, %R, %R, %R)",
                    m[0], m[1], m[2], m[3],
                    m[4], m[5], m[6], m[7]);
#else
            sipRes = PyString_FromString("PyQt5.QtGui.QMatrix2x4(");

            for (i = 0; i < 8; ++i)
            {
                if (i != 0)
                    PyString_ConcatAndDel(&sipRes, PyString_FromString(", "));

                PyString_ConcatAndDel(&sipRes, PyObject_Repr(m[i]));
            }

            PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
#endif
        }

        for (i = 0; i < 8; ++i)
            Py_XDECREF(m[i]);
#line 592 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQMatrix2x4.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMatrix2x4(void *, int);}
static void release_QMatrix2x4(void *sipCppV, int)
{
    delete reinterpret_cast< ::QMatrix2x4 *>(sipCppV);
}


extern "C" {static PyObject *pickle_QMatrix2x4(void *);}
static PyObject *pickle_QMatrix2x4(void *sipCppV)
{
     ::QMatrix2x4 *sipCpp = reinterpret_cast< ::QMatrix2x4 *>(sipCppV);
    PyObject *sipRes;

#line 785 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qgenericmatrix.sip"
        PYQT_FLOAT data[8];

        // We want the data in row-major order.
        sipCpp->copyDataTo(data);

        sipRes = Py_BuildValue((char *)"dddddddd",
                (double)data[0], (double)data[1], (double)data[2], (double)data[3],
                (double)data[4], (double)data[5], (double)data[6], (double)data[7]);
#line 625 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQMatrix2x4.cpp"

    return sipRes;
}


extern "C" {static void *array_QMatrix2x4(Py_ssize_t);}
static void *array_QMatrix2x4(Py_ssize_t sipNrElem)
{
    return new  ::QMatrix2x4[sipNrElem];
}


extern "C" {static void assign_QMatrix2x4(void *, Py_ssize_t, void *);}
static void assign_QMatrix2x4(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QMatrix2x4 *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QMatrix2x4 *>(sipSrc);
}


extern "C" {static void *copy_QMatrix2x4(const void *, Py_ssize_t);}
static void *copy_QMatrix2x4(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QMatrix2x4(reinterpret_cast<const  ::QMatrix2x4 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMatrix2x4(sipSimpleWrapper *);}
static void dealloc_QMatrix2x4(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QMatrix2x4(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QMatrix2x4(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMatrix2x4(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QMatrix2x4 *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QMatrix2x4();

            return sipCpp;
        }
    }

    {
        const  ::QMatrix2x4* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QMatrix2x4, &a0))
        {
            sipCpp = new  ::QMatrix2x4(*a0);

            return sipCpp;
        }
    }

    {
        PyObject * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "P0", &a0))
        {
            sipErrorState sipError = sipErrorNone;

#line 800 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qgenericmatrix.sip"
        PYQT_FLOAT values[8];

        if ((sipError = qtgui_matrixDataFromSequence(a0, 8, values)) == sipErrorNone)
            sipCpp = new QMatrix2x4(values);
#line 699 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQMatrix2x4.cpp"

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
static sipPySlotDef slots_QMatrix2x4[] = {
    {(void *)slot_QMatrix2x4___ne__, ne_slot},
    {(void *)slot_QMatrix2x4___eq__, eq_slot},
    {(void *)slot_QMatrix2x4___itruediv__, itruediv_slot},
    {(void *)slot_QMatrix2x4___imul__, imul_slot},
    {(void *)slot_QMatrix2x4___isub__, isub_slot},
    {(void *)slot_QMatrix2x4___iadd__, iadd_slot},
    {(void *)slot_QMatrix2x4___setitem__, setitem_slot},
    {(void *)slot_QMatrix2x4___getitem__, getitem_slot},
    {(void *)slot_QMatrix2x4___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QMatrix2x4[] = {
    {sipName_copyDataTo, meth_QMatrix2x4_copyDataTo, METH_VARARGS, doc_QMatrix2x4_copyDataTo},
    {sipName_data, meth_QMatrix2x4_data, METH_VARARGS, doc_QMatrix2x4_data},
    {sipName_fill, meth_QMatrix2x4_fill, METH_VARARGS, doc_QMatrix2x4_fill},
    {sipName_isIdentity, meth_QMatrix2x4_isIdentity, METH_VARARGS, doc_QMatrix2x4_isIdentity},
    {sipName_setToIdentity, meth_QMatrix2x4_setToIdentity, METH_VARARGS, doc_QMatrix2x4_setToIdentity},
    {sipName_transposed, meth_QMatrix2x4_transposed, METH_VARARGS, doc_QMatrix2x4_transposed}
};

PyDoc_STRVAR(doc_QMatrix2x4, "\1QMatrix2x4()\n"
"QMatrix2x4(QMatrix2x4)\n"
"QMatrix2x4(Sequence[float])");


static pyqt5ClassPluginDef plugin_QMatrix2x4 = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QMatrix2x4 = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QMatrix2x4,
        SIP_NULLPTR,
        &plugin_QMatrix2x4
    },
    {
        sipNameNr_QMatrix2x4,
        {0, 0, 1},
        6, methods_QMatrix2x4,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QMatrix2x4,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QMatrix2x4,
    init_type_QMatrix2x4,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QMatrix2x4,
    assign_QMatrix2x4,
    array_QMatrix2x4,
    copy_QMatrix2x4,
    release_QMatrix2x4,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    pickle_QMatrix2x4,
    SIP_NULLPTR,
    SIP_NULLPTR
};
