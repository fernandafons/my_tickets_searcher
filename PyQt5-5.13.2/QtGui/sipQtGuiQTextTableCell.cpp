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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qtexttable.sip"
#include <qtexttable.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextTableCell.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qtextcursor.sip"
#include <qtextcursor.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextTableCell.cpp"
#line 261 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextTableCell.cpp"


PyDoc_STRVAR(doc_QTextTableCell_format, "format(self) -> QTextCharFormat");

extern "C" {static PyObject *meth_QTextTableCell_format(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
             ::QTextCharFormat*sipRes;

            sipRes = new  ::QTextCharFormat(sipCpp->format());

            return sipConvertFromNewType(sipRes,sipType_QTextCharFormat,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_format, doc_QTextTableCell_format);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextTableCell_setFormat, "setFormat(self, QTextCharFormat)");

extern "C" {static PyObject *meth_QTextTableCell_setFormat(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_setFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextCharFormat* a0;
         ::QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QTextTableCell, &sipCpp, sipType_QTextCharFormat, &a0))
        {
            sipCpp->setFormat(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_setFormat, doc_QTextTableCell_setFormat);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextTableCell_row, "row(self) -> int");

extern "C" {static PyObject *meth_QTextTableCell_row(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_row(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->row();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_row, doc_QTextTableCell_row);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextTableCell_column, "column(self) -> int");

extern "C" {static PyObject *meth_QTextTableCell_column(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_column(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->column();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_column, doc_QTextTableCell_column);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextTableCell_rowSpan, "rowSpan(self) -> int");

extern "C" {static PyObject *meth_QTextTableCell_rowSpan(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_rowSpan(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->rowSpan();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_rowSpan, doc_QTextTableCell_rowSpan);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextTableCell_columnSpan, "columnSpan(self) -> int");

extern "C" {static PyObject *meth_QTextTableCell_columnSpan(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_columnSpan(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->columnSpan();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_columnSpan, doc_QTextTableCell_columnSpan);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextTableCell_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QTextTableCell_isValid(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_isValid, doc_QTextTableCell_isValid);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextTableCell_firstCursorPosition, "firstCursorPosition(self) -> QTextCursor");

extern "C" {static PyObject *meth_QTextTableCell_firstCursorPosition(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_firstCursorPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
             ::QTextCursor*sipRes;

            sipRes = new  ::QTextCursor(sipCpp->firstCursorPosition());

            return sipConvertFromNewType(sipRes,sipType_QTextCursor,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_firstCursorPosition, doc_QTextTableCell_firstCursorPosition);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextTableCell_lastCursorPosition, "lastCursorPosition(self) -> QTextCursor");

extern "C" {static PyObject *meth_QTextTableCell_lastCursorPosition(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_lastCursorPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
             ::QTextCursor*sipRes;

            sipRes = new  ::QTextCursor(sipCpp->lastCursorPosition());

            return sipConvertFromNewType(sipRes,sipType_QTextCursor,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_lastCursorPosition, doc_QTextTableCell_lastCursorPosition);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextTableCell_tableCellFormatIndex, "tableCellFormatIndex(self) -> int");

extern "C" {static PyObject *meth_QTextTableCell_tableCellFormatIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_tableCellFormatIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->tableCellFormatIndex();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_tableCellFormatIndex, doc_QTextTableCell_tableCellFormatIndex);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QTextTableCell___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextTableCell___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTextTableCell *sipCpp = reinterpret_cast< ::QTextTableCell *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextTableCell));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextTableCell* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextTableCell, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QTextTableCell::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QTextTableCell, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTextTableCell___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextTableCell___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTextTableCell *sipCpp = reinterpret_cast< ::QTextTableCell *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextTableCell));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextTableCell* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextTableCell, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QTextTableCell::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QTextTableCell, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextTableCell(void *, int);}
static void release_QTextTableCell(void *sipCppV, int)
{
    delete reinterpret_cast< ::QTextTableCell *>(sipCppV);
}


extern "C" {static void *array_QTextTableCell(Py_ssize_t);}
static void *array_QTextTableCell(Py_ssize_t sipNrElem)
{
    return new  ::QTextTableCell[sipNrElem];
}


extern "C" {static void assign_QTextTableCell(void *, Py_ssize_t, void *);}
static void assign_QTextTableCell(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QTextTableCell *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QTextTableCell *>(sipSrc);
}


extern "C" {static void *copy_QTextTableCell(const void *, Py_ssize_t);}
static void *copy_QTextTableCell(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QTextTableCell(reinterpret_cast<const  ::QTextTableCell *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextTableCell(sipSimpleWrapper *);}
static void dealloc_QTextTableCell(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTextTableCell(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QTextTableCell(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextTableCell(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QTextTableCell *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QTextTableCell();

            return sipCpp;
        }
    }

    {
        const  ::QTextTableCell* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QTextTableCell, &a0))
        {
            sipCpp = new  ::QTextTableCell(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextTableCell[] = {
    {(void *)slot_QTextTableCell___ne__, ne_slot},
    {(void *)slot_QTextTableCell___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QTextTableCell[] = {
    {sipName_column, meth_QTextTableCell_column, METH_VARARGS, doc_QTextTableCell_column},
    {sipName_columnSpan, meth_QTextTableCell_columnSpan, METH_VARARGS, doc_QTextTableCell_columnSpan},
    {sipName_firstCursorPosition, meth_QTextTableCell_firstCursorPosition, METH_VARARGS, doc_QTextTableCell_firstCursorPosition},
    {sipName_format, meth_QTextTableCell_format, METH_VARARGS, doc_QTextTableCell_format},
    {sipName_isValid, meth_QTextTableCell_isValid, METH_VARARGS, doc_QTextTableCell_isValid},
    {sipName_lastCursorPosition, meth_QTextTableCell_lastCursorPosition, METH_VARARGS, doc_QTextTableCell_lastCursorPosition},
    {sipName_row, meth_QTextTableCell_row, METH_VARARGS, doc_QTextTableCell_row},
    {sipName_rowSpan, meth_QTextTableCell_rowSpan, METH_VARARGS, doc_QTextTableCell_rowSpan},
    {sipName_setFormat, meth_QTextTableCell_setFormat, METH_VARARGS, doc_QTextTableCell_setFormat},
    {sipName_tableCellFormatIndex, meth_QTextTableCell_tableCellFormatIndex, METH_VARARGS, doc_QTextTableCell_tableCellFormatIndex}
};

PyDoc_STRVAR(doc_QTextTableCell, "\1QTextTableCell()\n"
"QTextTableCell(QTextTableCell)");


static pyqt5ClassPluginDef plugin_QTextTableCell = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QTextTableCell = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTextTableCell,
        SIP_NULLPTR,
        &plugin_QTextTableCell
    },
    {
        sipNameNr_QTextTableCell,
        {0, 0, 1},
        10, methods_QTextTableCell,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QTextTableCell,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QTextTableCell,
    init_type_QTextTableCell,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QTextTableCell,
    assign_QTextTableCell,
    array_QTextTableCell,
    copy_QTextTableCell,
    release_QTextTableCell,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
