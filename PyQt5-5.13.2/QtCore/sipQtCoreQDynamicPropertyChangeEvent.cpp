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

#line 262 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQDynamicPropertyChangeEvent.cpp"

#line 30 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQDynamicPropertyChangeEvent.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQDynamicPropertyChangeEvent.cpp"


class sipQDynamicPropertyChangeEvent : public  ::QDynamicPropertyChangeEvent
{
public:
    sipQDynamicPropertyChangeEvent(const  ::QByteArray&);
    sipQDynamicPropertyChangeEvent(const  ::QDynamicPropertyChangeEvent&);
    ~sipQDynamicPropertyChangeEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDynamicPropertyChangeEvent(const sipQDynamicPropertyChangeEvent &);
    sipQDynamicPropertyChangeEvent &operator = (const sipQDynamicPropertyChangeEvent &);
};

sipQDynamicPropertyChangeEvent::sipQDynamicPropertyChangeEvent(const  ::QByteArray& a0):  ::QDynamicPropertyChangeEvent(a0), sipPySelf(SIP_NULLPTR)
{
}

sipQDynamicPropertyChangeEvent::sipQDynamicPropertyChangeEvent(const  ::QDynamicPropertyChangeEvent& a0):  ::QDynamicPropertyChangeEvent(a0), sipPySelf(SIP_NULLPTR)
{
}

sipQDynamicPropertyChangeEvent::~sipQDynamicPropertyChangeEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QDynamicPropertyChangeEvent_propertyName, "propertyName(self) -> QByteArray");

extern "C" {static PyObject *meth_QDynamicPropertyChangeEvent_propertyName(PyObject *, PyObject *);}
static PyObject *meth_QDynamicPropertyChangeEvent_propertyName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDynamicPropertyChangeEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDynamicPropertyChangeEvent, &sipCpp))
        {
             ::QByteArray*sipRes;

            sipRes = new  ::QByteArray(sipCpp->propertyName());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDynamicPropertyChangeEvent, sipName_propertyName, doc_QDynamicPropertyChangeEvent_propertyName);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QDynamicPropertyChangeEvent(void *, const sipTypeDef *);}
static void *cast_QDynamicPropertyChangeEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QDynamicPropertyChangeEvent *sipCpp = reinterpret_cast< ::QDynamicPropertyChangeEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDynamicPropertyChangeEvent(void *, int);}
static void release_QDynamicPropertyChangeEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDynamicPropertyChangeEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QDynamicPropertyChangeEvent *>(sipCppV);
}


extern "C" {static void assign_QDynamicPropertyChangeEvent(void *, Py_ssize_t, void *);}
static void assign_QDynamicPropertyChangeEvent(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDynamicPropertyChangeEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDynamicPropertyChangeEvent *>(sipSrc);
}


extern "C" {static void *copy_QDynamicPropertyChangeEvent(const void *, Py_ssize_t);}
static void *copy_QDynamicPropertyChangeEvent(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QDynamicPropertyChangeEvent(reinterpret_cast<const  ::QDynamicPropertyChangeEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDynamicPropertyChangeEvent(sipSimpleWrapper *);}
static void dealloc_QDynamicPropertyChangeEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQDynamicPropertyChangeEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDynamicPropertyChangeEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QDynamicPropertyChangeEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDynamicPropertyChangeEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDynamicPropertyChangeEvent *sipCpp = SIP_NULLPTR;

    {
        const  ::QByteArray* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QByteArray, &a0, &a0State))
        {
            sipCpp = new sipQDynamicPropertyChangeEvent(*a0);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QDynamicPropertyChangeEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QDynamicPropertyChangeEvent, &a0))
        {
            sipCpp = new sipQDynamicPropertyChangeEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDynamicPropertyChangeEvent[] = {{69, 255, 1}};


static PyMethodDef methods_QDynamicPropertyChangeEvent[] = {
    {sipName_propertyName, meth_QDynamicPropertyChangeEvent_propertyName, METH_VARARGS, doc_QDynamicPropertyChangeEvent_propertyName}
};

PyDoc_STRVAR(doc_QDynamicPropertyChangeEvent, "\1QDynamicPropertyChangeEvent(Union[QByteArray, bytes, bytearray])\n"
"QDynamicPropertyChangeEvent(QDynamicPropertyChangeEvent)");


static pyqt5ClassPluginDef plugin_QDynamicPropertyChangeEvent = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QDynamicPropertyChangeEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QDynamicPropertyChangeEvent,
        SIP_NULLPTR,
        &plugin_QDynamicPropertyChangeEvent
    },
    {
        sipNameNr_QDynamicPropertyChangeEvent,
        {0, 0, 1},
        1, methods_QDynamicPropertyChangeEvent,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QDynamicPropertyChangeEvent,
    -1,
    -1,
    supers_QDynamicPropertyChangeEvent,
    SIP_NULLPTR,
    init_type_QDynamicPropertyChangeEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QDynamicPropertyChangeEvent,
    assign_QDynamicPropertyChangeEvent,
    SIP_NULLPTR,
    copy_QDynamicPropertyChangeEvent,
    release_QDynamicPropertyChangeEvent,
    cast_QDynamicPropertyChangeEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
