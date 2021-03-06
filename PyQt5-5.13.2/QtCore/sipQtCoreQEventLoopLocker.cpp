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

#line 65 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qeventloop.sip"
#include <qeventloop.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQEventLoopLocker.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qeventloop.sip"
#include <qeventloop.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQEventLoopLocker.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQEventLoopLocker.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QEventLoopLocker(void *, int);}
static void release_QEventLoopLocker(void *sipCppV, int)
{
    delete reinterpret_cast< ::QEventLoopLocker *>(sipCppV);
}


extern "C" {static void *array_QEventLoopLocker(Py_ssize_t);}
static void *array_QEventLoopLocker(Py_ssize_t sipNrElem)
{
    return new  ::QEventLoopLocker[sipNrElem];
}


extern "C" {static void dealloc_QEventLoopLocker(sipSimpleWrapper *);}
static void dealloc_QEventLoopLocker(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QEventLoopLocker(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QEventLoopLocker(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QEventLoopLocker(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QEventLoopLocker *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QEventLoopLocker();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
         ::QEventLoop* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J8", sipType_QEventLoop, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QEventLoopLocker(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
         ::QThread* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J8", sipType_QThread, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QEventLoopLocker(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}

PyDoc_STRVAR(doc_QEventLoopLocker, "\1QEventLoopLocker()\n"
"QEventLoopLocker(QEventLoop)\n"
"QEventLoopLocker(QThread)");


static pyqt5ClassPluginDef plugin_QEventLoopLocker = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QEventLoopLocker = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QEventLoopLocker,
        SIP_NULLPTR,
        &plugin_QEventLoopLocker
    },
    {
        sipNameNr_QEventLoopLocker,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QEventLoopLocker,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QEventLoopLocker,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QEventLoopLocker,
    SIP_NULLPTR,
    array_QEventLoopLocker,
    SIP_NULLPTR,
    release_QEventLoopLocker,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
