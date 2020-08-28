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

#include "sipAPIQtNetwork.h"

#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qpassworddigestor.sip"
#include <qpassworddigestor.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQPasswordDigestor.cpp"

#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQPasswordDigestor.cpp"
#line 26 "sip/QtCore/qcryptographichash.sip"
#include <qcryptographichash.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQPasswordDigestor.cpp"


PyDoc_STRVAR(doc_QPasswordDigestor_deriveKeyPbkdf2, "deriveKeyPbkdf2(QCryptographicHash.Algorithm, Union[QByteArray, bytes, bytearray], Union[QByteArray, bytes, bytearray], int, int) -> QByteArray");

extern "C" {static PyObject *meth_QPasswordDigestor_deriveKeyPbkdf2(PyObject *, PyObject *);}
static PyObject *meth_QPasswordDigestor_deriveKeyPbkdf2(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QCryptographicHash::Algorithm a0;
        const  ::QByteArray* a1;
        int a1State = 0;
        const  ::QByteArray* a2;
        int a2State = 0;
        int a3;
         ::quint64 a4;

        if (sipParseArgs(&sipParseErr, sipArgs, "EJ1J1io", sipType_QCryptographicHash_Algorithm, &a0, sipType_QByteArray, &a1, &a1State, sipType_QByteArray, &a2, &a2State, &a3, &a4))
        {
             ::QByteArray*sipRes;

            sipRes = new  ::QByteArray( ::QPasswordDigestor::deriveKeyPbkdf2(a0,*a1,*a2,a3,a4));
            sipReleaseType(const_cast< ::QByteArray *>(a1),sipType_QByteArray,a1State);
            sipReleaseType(const_cast< ::QByteArray *>(a2),sipType_QByteArray,a2State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_deriveKeyPbkdf2, doc_QPasswordDigestor_deriveKeyPbkdf2);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPasswordDigestor_deriveKeyPbkdf1, "deriveKeyPbkdf1(QCryptographicHash.Algorithm, Union[QByteArray, bytes, bytearray], Union[QByteArray, bytes, bytearray], int, int) -> QByteArray");

extern "C" {static PyObject *meth_QPasswordDigestor_deriveKeyPbkdf1(PyObject *, PyObject *);}
static PyObject *meth_QPasswordDigestor_deriveKeyPbkdf1(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QCryptographicHash::Algorithm a0;
        const  ::QByteArray* a1;
        int a1State = 0;
        const  ::QByteArray* a2;
        int a2State = 0;
        int a3;
         ::quint64 a4;

        if (sipParseArgs(&sipParseErr, sipArgs, "EJ1J1io", sipType_QCryptographicHash_Algorithm, &a0, sipType_QByteArray, &a1, &a1State, sipType_QByteArray, &a2, &a2State, &a3, &a4))
        {
             ::QByteArray*sipRes;

            sipRes = new  ::QByteArray( ::QPasswordDigestor::deriveKeyPbkdf1(a0,*a1,*a2,a3,a4));
            sipReleaseType(const_cast< ::QByteArray *>(a1),sipType_QByteArray,a1State);
            sipReleaseType(const_cast< ::QByteArray *>(a2),sipType_QByteArray,a2State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_deriveKeyPbkdf1, doc_QPasswordDigestor_deriveKeyPbkdf1);

    return SIP_NULLPTR;
}


static PyMethodDef methods_QPasswordDigestor[] = {
    {sipName_deriveKeyPbkdf1, meth_QPasswordDigestor_deriveKeyPbkdf1, METH_VARARGS, doc_QPasswordDigestor_deriveKeyPbkdf1},
    {sipName_deriveKeyPbkdf2, meth_QPasswordDigestor_deriveKeyPbkdf2, METH_VARARGS, doc_QPasswordDigestor_deriveKeyPbkdf2}
};


static pyqt5ClassPluginDef plugin_QPasswordDigestor = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtNetwork_QPasswordDigestor = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_NAMESPACE,
        sipNameNr_QPasswordDigestor,
        SIP_NULLPTR,
        &plugin_QPasswordDigestor
    },
    {
        sipNameNr_QPasswordDigestor,
        {0, 0, 1},
        2, methods_QPasswordDigestor,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
