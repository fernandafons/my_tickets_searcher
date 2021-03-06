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

#line 118 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextBlock.cpp"

#line 28 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextBlock.cpp"
#line 48 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qtextlayout.sip"
#include <qtextlayout.h>
#line 70 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qtextlayout.sip"
#include <qtextlayout.h>
#line 38 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextBlock.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 41 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextBlock.cpp"
#line 248 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 44 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextBlock.cpp"
#line 118 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 143 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 49 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextBlock.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qtextlist.sip"
#include <qtextlist.h>
#line 52 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextBlock.cpp"
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 55 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextBlock.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 58 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextBlock.cpp"
#line 261 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 61 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextBlock.cpp"
#line 376 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 64 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextBlock.cpp"
#line 48 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qtextlayout.sip"
#include <qtextlayout.h>
#line 67 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextBlock.cpp"


PyDoc_STRVAR(doc_QTextBlock_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QTextBlock_isValid(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_isValid, doc_QTextBlock_isValid);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_position, "position(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_position(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->position();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_position, doc_QTextBlock_position);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_length, "length(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_length(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_length(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->length();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_length, doc_QTextBlock_length);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_contains, "contains(self, int) -> bool");

extern "C" {static PyObject *meth_QTextBlock_contains(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->contains(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_contains, doc_QTextBlock_contains);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_layout, "layout(self) -> QTextLayout");

extern "C" {static PyObject *meth_QTextBlock_layout(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_layout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
             ::QTextLayout*sipRes;

            sipRes = sipCpp->layout();

            return sipConvertFromType(sipRes,sipType_QTextLayout,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_layout, doc_QTextBlock_layout);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_blockFormat, "blockFormat(self) -> QTextBlockFormat");

extern "C" {static PyObject *meth_QTextBlock_blockFormat(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_blockFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
             ::QTextBlockFormat*sipRes;

            sipRes = new  ::QTextBlockFormat(sipCpp->blockFormat());

            return sipConvertFromNewType(sipRes,sipType_QTextBlockFormat,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_blockFormat, doc_QTextBlock_blockFormat);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_blockFormatIndex, "blockFormatIndex(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_blockFormatIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_blockFormatIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->blockFormatIndex();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_blockFormatIndex, doc_QTextBlock_blockFormatIndex);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_charFormat, "charFormat(self) -> QTextCharFormat");

extern "C" {static PyObject *meth_QTextBlock_charFormat(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_charFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
             ::QTextCharFormat*sipRes;

            sipRes = new  ::QTextCharFormat(sipCpp->charFormat());

            return sipConvertFromNewType(sipRes,sipType_QTextCharFormat,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_charFormat, doc_QTextBlock_charFormat);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_charFormatIndex, "charFormatIndex(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_charFormatIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_charFormatIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->charFormatIndex();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_charFormatIndex, doc_QTextBlock_charFormatIndex);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_text, "text(self) -> str");

extern "C" {static PyObject *meth_QTextBlock_text(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->text());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_text, doc_QTextBlock_text);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_document, "document(self) -> QTextDocument");

extern "C" {static PyObject *meth_QTextBlock_document(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_document(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            const  ::QTextDocument*sipRes;

            sipRes = sipCpp->document();

            return sipConvertFromType(const_cast< ::QTextDocument *>(sipRes),sipType_QTextDocument,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_document, doc_QTextBlock_document);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_textList, "textList(self) -> QTextList");

extern "C" {static PyObject *meth_QTextBlock_textList(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_textList(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
             ::QTextList*sipRes;

            sipRes = sipCpp->textList();

            return sipConvertFromType(sipRes,sipType_QTextList,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_textList, doc_QTextBlock_textList);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_begin, "begin(self) -> QTextBlock.iterator");

extern "C" {static PyObject *meth_QTextBlock_begin(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_begin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
             ::QTextBlock::iterator*sipRes;

            sipRes = new  ::QTextBlock::iterator(sipCpp->begin());

            return sipConvertFromNewType(sipRes,sipType_QTextBlock_iterator,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_begin, doc_QTextBlock_begin);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_end, "end(self) -> QTextBlock.iterator");

extern "C" {static PyObject *meth_QTextBlock_end(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_end(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
             ::QTextBlock::iterator*sipRes;

            sipRes = new  ::QTextBlock::iterator(sipCpp->end());

            return sipConvertFromNewType(sipRes,sipType_QTextBlock_iterator,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_end, doc_QTextBlock_end);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_next, "next(self) -> QTextBlock");

extern "C" {static PyObject *meth_QTextBlock_next(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_next(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
             ::QTextBlock*sipRes;

            sipRes = new  ::QTextBlock(sipCpp->next());

            return sipConvertFromNewType(sipRes,sipType_QTextBlock,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_next, doc_QTextBlock_next);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_previous, "previous(self) -> QTextBlock");

extern "C" {static PyObject *meth_QTextBlock_previous(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_previous(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
             ::QTextBlock*sipRes;

            sipRes = new  ::QTextBlock(sipCpp->previous());

            return sipConvertFromNewType(sipRes,sipType_QTextBlock,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_previous, doc_QTextBlock_previous);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_userData, "userData(self) -> QTextBlockUserData");

extern "C" {static PyObject *meth_QTextBlock_userData(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_userData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
             ::QTextBlockUserData*sipRes;

            sipRes = sipCpp->userData();

            return sipConvertFromType(sipRes,sipType_QTextBlockUserData,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_userData, doc_QTextBlock_userData);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_setUserData, "setUserData(self, QTextBlockUserData)");

extern "C" {static PyObject *meth_QTextBlock_setUserData(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setUserData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTextBlockUserData* a0;
        PyObject *a0Wrapper;
         ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QTextBlock, &sipCpp, &a0Wrapper, sipType_QTextBlockUserData, &a0))
        {
            int sipIsErr = 0;

#line 182 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qtextobject.sip"
        // Ownership of the user data is with the document not the text block.
        const QTextDocument *td = sipCpp->document();
        
        if (td)
        {
            PyObject *py_td = qtgui_wrap_ancestors(const_cast<QTextDocument *>(td),
                    sipType_QTextDocument);
        
            if (!py_td)
            {
                sipIsErr = 1;
            }
            else
            {
                sipTransferTo(a0Wrapper, py_td);
                Py_DECREF(py_td);
            }
        }
        
        sipCpp->setUserData(a0);
#line 568 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextBlock.cpp"

            if (sipIsErr)
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setUserData, doc_QTextBlock_setUserData);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_userState, "userState(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_userState(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_userState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->userState();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_userState, doc_QTextBlock_userState);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_setUserState, "setUserState(self, int)");

extern "C" {static PyObject *meth_QTextBlock_setUserState(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setUserState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            sipCpp->setUserState(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setUserState, doc_QTextBlock_setUserState);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_clearLayout, "clearLayout(self)");

extern "C" {static PyObject *meth_QTextBlock_clearLayout(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_clearLayout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            sipCpp->clearLayout();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_clearLayout, doc_QTextBlock_clearLayout);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_revision, "revision(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_revision(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_revision(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->revision();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_revision, doc_QTextBlock_revision);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_setRevision, "setRevision(self, int)");

extern "C" {static PyObject *meth_QTextBlock_setRevision(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setRevision(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            sipCpp->setRevision(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setRevision, doc_QTextBlock_setRevision);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_isVisible, "isVisible(self) -> bool");

extern "C" {static PyObject *meth_QTextBlock_isVisible(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_isVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isVisible();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_isVisible, doc_QTextBlock_isVisible);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_setVisible, "setVisible(self, bool)");

extern "C" {static PyObject *meth_QTextBlock_setVisible(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
         ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            sipCpp->setVisible(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setVisible, doc_QTextBlock_setVisible);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_blockNumber, "blockNumber(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_blockNumber(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_blockNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->blockNumber();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_blockNumber, doc_QTextBlock_blockNumber);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_firstLineNumber, "firstLineNumber(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_firstLineNumber(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_firstLineNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->firstLineNumber();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_firstLineNumber, doc_QTextBlock_firstLineNumber);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_setLineCount, "setLineCount(self, int)");

extern "C" {static PyObject *meth_QTextBlock_setLineCount(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setLineCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            sipCpp->setLineCount(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setLineCount, doc_QTextBlock_setLineCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_lineCount, "lineCount(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_lineCount(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_lineCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->lineCount();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_lineCount, doc_QTextBlock_lineCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_textDirection, "textDirection(self) -> Qt.LayoutDirection");

extern "C" {static PyObject *meth_QTextBlock_textDirection(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_textDirection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
             ::Qt::LayoutDirection sipRes;

            sipRes = sipCpp->textDirection();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_Qt_LayoutDirection);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_textDirection, doc_QTextBlock_textDirection);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextBlock_textFormats, "textFormats(self) -> List[QTextLayout.FormatRange]");

extern "C" {static PyObject *meth_QTextBlock_textFormats(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_textFormats(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QVector< ::QTextLayout::FormatRange>*sipRes;

            sipRes = new QVector< ::QTextLayout::FormatRange>(sipCpp->textFormats());

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QTextLayout_FormatRange,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_textFormats, doc_QTextBlock_textFormats);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QTextBlock___ge__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock___ge__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTextBlock *sipCpp = reinterpret_cast< ::QTextBlock *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::QTextBlock::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ge_slot, sipType_QTextBlock, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTextBlock___lt__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock___lt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTextBlock *sipCpp = reinterpret_cast< ::QTextBlock *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QTextBlock::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, lt_slot, sipType_QTextBlock, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTextBlock___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTextBlock *sipCpp = reinterpret_cast< ::QTextBlock *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QTextBlock::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QTextBlock, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTextBlock___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTextBlock *sipCpp = reinterpret_cast< ::QTextBlock *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBlock* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QTextBlock::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QTextBlock, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextBlock(void *, int);}
static void release_QTextBlock(void *sipCppV, int)
{
    delete reinterpret_cast< ::QTextBlock *>(sipCppV);
}


extern "C" {static void *array_QTextBlock(Py_ssize_t);}
static void *array_QTextBlock(Py_ssize_t sipNrElem)
{
    return new  ::QTextBlock[sipNrElem];
}


extern "C" {static void assign_QTextBlock(void *, Py_ssize_t, void *);}
static void assign_QTextBlock(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QTextBlock *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QTextBlock *>(sipSrc);
}


extern "C" {static void *copy_QTextBlock(const void *, Py_ssize_t);}
static void *copy_QTextBlock(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QTextBlock(reinterpret_cast<const  ::QTextBlock *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextBlock(sipSimpleWrapper *);}
static void dealloc_QTextBlock(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTextBlock(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QTextBlock(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextBlock(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QTextBlock *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QTextBlock();

            return sipCpp;
        }
    }

    {
        const  ::QTextBlock* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QTextBlock, &a0))
        {
            sipCpp = new  ::QTextBlock(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextBlock[] = {
    {(void *)slot_QTextBlock___ge__, ge_slot},
    {(void *)slot_QTextBlock___lt__, lt_slot},
    {(void *)slot_QTextBlock___ne__, ne_slot},
    {(void *)slot_QTextBlock___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QTextBlock[] = {
    {sipName_begin, meth_QTextBlock_begin, METH_VARARGS, doc_QTextBlock_begin},
    {sipName_blockFormat, meth_QTextBlock_blockFormat, METH_VARARGS, doc_QTextBlock_blockFormat},
    {sipName_blockFormatIndex, meth_QTextBlock_blockFormatIndex, METH_VARARGS, doc_QTextBlock_blockFormatIndex},
    {sipName_blockNumber, meth_QTextBlock_blockNumber, METH_VARARGS, doc_QTextBlock_blockNumber},
    {sipName_charFormat, meth_QTextBlock_charFormat, METH_VARARGS, doc_QTextBlock_charFormat},
    {sipName_charFormatIndex, meth_QTextBlock_charFormatIndex, METH_VARARGS, doc_QTextBlock_charFormatIndex},
    {sipName_clearLayout, meth_QTextBlock_clearLayout, METH_VARARGS, doc_QTextBlock_clearLayout},
    {sipName_contains, meth_QTextBlock_contains, METH_VARARGS, doc_QTextBlock_contains},
    {sipName_document, meth_QTextBlock_document, METH_VARARGS, doc_QTextBlock_document},
    {sipName_end, meth_QTextBlock_end, METH_VARARGS, doc_QTextBlock_end},
    {sipName_firstLineNumber, meth_QTextBlock_firstLineNumber, METH_VARARGS, doc_QTextBlock_firstLineNumber},
    {sipName_isValid, meth_QTextBlock_isValid, METH_VARARGS, doc_QTextBlock_isValid},
    {sipName_isVisible, meth_QTextBlock_isVisible, METH_VARARGS, doc_QTextBlock_isVisible},
    {sipName_layout, meth_QTextBlock_layout, METH_VARARGS, doc_QTextBlock_layout},
    {sipName_length, meth_QTextBlock_length, METH_VARARGS, doc_QTextBlock_length},
    {sipName_lineCount, meth_QTextBlock_lineCount, METH_VARARGS, doc_QTextBlock_lineCount},
    {sipName_next, meth_QTextBlock_next, METH_VARARGS, doc_QTextBlock_next},
    {sipName_position, meth_QTextBlock_position, METH_VARARGS, doc_QTextBlock_position},
    {sipName_previous, meth_QTextBlock_previous, METH_VARARGS, doc_QTextBlock_previous},
    {sipName_revision, meth_QTextBlock_revision, METH_VARARGS, doc_QTextBlock_revision},
    {sipName_setLineCount, meth_QTextBlock_setLineCount, METH_VARARGS, doc_QTextBlock_setLineCount},
    {sipName_setRevision, meth_QTextBlock_setRevision, METH_VARARGS, doc_QTextBlock_setRevision},
    {sipName_setUserData, meth_QTextBlock_setUserData, METH_VARARGS, doc_QTextBlock_setUserData},
    {sipName_setUserState, meth_QTextBlock_setUserState, METH_VARARGS, doc_QTextBlock_setUserState},
    {sipName_setVisible, meth_QTextBlock_setVisible, METH_VARARGS, doc_QTextBlock_setVisible},
    {sipName_text, meth_QTextBlock_text, METH_VARARGS, doc_QTextBlock_text},
    {sipName_textDirection, meth_QTextBlock_textDirection, METH_VARARGS, doc_QTextBlock_textDirection},
    {sipName_textFormats, meth_QTextBlock_textFormats, METH_VARARGS, doc_QTextBlock_textFormats},
    {sipName_textList, meth_QTextBlock_textList, METH_VARARGS, doc_QTextBlock_textList},
    {sipName_userData, meth_QTextBlock_userData, METH_VARARGS, doc_QTextBlock_userData},
    {sipName_userState, meth_QTextBlock_userState, METH_VARARGS, doc_QTextBlock_userState}
};

PyDoc_STRVAR(doc_QTextBlock, "\1QTextBlock()\n"
"QTextBlock(QTextBlock)");


static pyqt5ClassPluginDef plugin_QTextBlock = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QTextBlock = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTextBlock,
        SIP_NULLPTR,
        &plugin_QTextBlock
    },
    {
        sipNameNr_QTextBlock,
        {0, 0, 1},
        31, methods_QTextBlock,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QTextBlock,
    -1,
    -1,
    SIP_NULLPTR,
    slots_QTextBlock,
    init_type_QTextBlock,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QTextBlock,
    assign_QTextBlock,
    array_QTextBlock,
    copy_QTextBlock,
    release_QTextBlock,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
