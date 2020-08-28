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

#include "sipAPIQtDBus.h"

#line 91 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtDBus/qpydbusreply.sip"
#include <qdbusreply.h>
#include <qpydbusreply.h>
#line 30 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtDBus/sipQtDBusQDBusReply0400.cpp"



extern "C" {static void assign_QDBusReply_0400(void *, Py_ssize_t, void *);}
static void assign_QDBusReply_0400(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDBusReply<void> *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDBusReply<void> *>(sipSrc);
}


extern "C" {static void *array_QDBusReply_0400(Py_ssize_t);}
static void *array_QDBusReply_0400(Py_ssize_t sipNrElem)
{
    return new  ::QDBusReply<void>[sipNrElem];
}


extern "C" {static void *copy_QDBusReply_0400(const void *, Py_ssize_t);}
static void *copy_QDBusReply_0400(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QDBusReply<void>(reinterpret_cast<const  ::QDBusReply<void> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QDBusReply_0400(void *, int);}
static void release_QDBusReply_0400(void *ptr, int)
{
    delete reinterpret_cast< ::QDBusReply<void> *>(ptr);
}



extern "C" {static int convertTo_QDBusReply_0400(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDBusReply_0400(PyObject *,void **,int *,PyObject *)
{
#line 112 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtDBus/qpydbusreply.sip"
    // We never create a QDBusReply from Python.
    return 0;
#line 70 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtDBus/sipQtDBusQDBusReply0400.cpp"
}


extern "C" {static PyObject *convertFrom_QDBusReply_0400(void *, PyObject *);}
static PyObject *convertFrom_QDBusReply_0400(void *sipCppV, PyObject *sipTransferObj)
{
    ::QDBusReply<void> *sipCpp = reinterpret_cast< ::QDBusReply<void> *>(sipCppV);

#line 96 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtDBus/qpydbusreply.sip"
    Py_INCREF(Py_None);
    QPyDBusReply *reply = new QPyDBusReply(Py_None,
            sipCpp->isValid(), sipCpp->error());

    PyObject *reply_obj = sipConvertFromNewType(reply, sipType_QPyDBusReply, sipTransferObj);

    if (reply_obj == NULL)
    {
        delete reply;
        return NULL;
    }

    return reply_obj;
#line 93 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtDBus/sipQtDBusQDBusReply0400.cpp"
}


sipMappedTypeDef sipTypeDef_QtDBus_QDBusReply_0400 = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1814,     /* QDBusReply<void> */
        SIP_NULLPTR,
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QDBusReply_0400,
    array_QDBusReply_0400,
    copy_QDBusReply_0400,
    release_QDBusReply_0400,
    convertTo_QDBusReply_0400,
    convertFrom_QDBusReply_0400
};