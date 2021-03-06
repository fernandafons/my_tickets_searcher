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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qnetworkconfiguration.sip"
#include <qnetworkconfiguration.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQNetworkConfiguration.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQNetworkConfiguration.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQNetworkConfiguration.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qnetworkconfiguration.sip"
#include <qnetworkconfiguration.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQNetworkConfiguration.cpp"


PyDoc_STRVAR(doc_QNetworkConfiguration_state, "state(self) -> QNetworkConfiguration.StateFlags");

extern "C" {static PyObject *meth_QNetworkConfiguration_state(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_state(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
             ::QNetworkConfiguration::StateFlags*sipRes;

            sipRes = new  ::QNetworkConfiguration::StateFlags(sipCpp->state());

            return sipConvertFromNewType(sipRes,sipType_QNetworkConfiguration_StateFlags,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_state, doc_QNetworkConfiguration_state);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_type, "type(self) -> QNetworkConfiguration.Type");

extern "C" {static PyObject *meth_QNetworkConfiguration_type(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
             ::QNetworkConfiguration::Type sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QNetworkConfiguration_Type);
        }
    }

    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_type, doc_QNetworkConfiguration_type);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_purpose, "purpose(self) -> QNetworkConfiguration.Purpose");

extern "C" {static PyObject *meth_QNetworkConfiguration_purpose(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_purpose(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
             ::QNetworkConfiguration::Purpose sipRes;

            sipRes = sipCpp->purpose();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QNetworkConfiguration_Purpose);
        }
    }

    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_purpose, doc_QNetworkConfiguration_purpose);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_bearerType, "bearerType(self) -> QNetworkConfiguration.BearerType");

extern "C" {static PyObject *meth_QNetworkConfiguration_bearerType(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_bearerType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
             ::QNetworkConfiguration::BearerType sipRes;

            sipRes = sipCpp->bearerType();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QNetworkConfiguration_BearerType);
        }
    }

    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_bearerType, doc_QNetworkConfiguration_bearerType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_bearerTypeName, "bearerTypeName(self) -> str");

extern "C" {static PyObject *meth_QNetworkConfiguration_bearerTypeName(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_bearerTypeName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->bearerTypeName());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_bearerTypeName, doc_QNetworkConfiguration_bearerTypeName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_bearerTypeFamily, "bearerTypeFamily(self) -> QNetworkConfiguration.BearerType");

extern "C" {static PyObject *meth_QNetworkConfiguration_bearerTypeFamily(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_bearerTypeFamily(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
             ::QNetworkConfiguration::BearerType sipRes;

            sipRes = sipCpp->bearerTypeFamily();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QNetworkConfiguration_BearerType);
        }
    }

    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_bearerTypeFamily, doc_QNetworkConfiguration_bearerTypeFamily);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_identifier, "identifier(self) -> str");

extern "C" {static PyObject *meth_QNetworkConfiguration_identifier(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_identifier(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->identifier());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_identifier, doc_QNetworkConfiguration_identifier);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_isRoamingAvailable, "isRoamingAvailable(self) -> bool");

extern "C" {static PyObject *meth_QNetworkConfiguration_isRoamingAvailable(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_isRoamingAvailable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isRoamingAvailable();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_isRoamingAvailable, doc_QNetworkConfiguration_isRoamingAvailable);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_children, "children(self) -> List[QNetworkConfiguration]");

extern "C" {static PyObject *meth_QNetworkConfiguration_children(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_children(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QList< ::QNetworkConfiguration>*sipRes;

            sipRes = new QList< ::QNetworkConfiguration>(sipCpp->children());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QNetworkConfiguration,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_children, doc_QNetworkConfiguration_children);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_name, "name(self) -> str");

extern "C" {static PyObject *meth_QNetworkConfiguration_name(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_name, doc_QNetworkConfiguration_name);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QNetworkConfiguration_isValid(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_isValid, doc_QNetworkConfiguration_isValid);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_swap, "swap(self, QNetworkConfiguration)");

extern "C" {static PyObject *meth_QNetworkConfiguration_swap(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QNetworkConfiguration* a0;
         ::QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QNetworkConfiguration, &sipCpp, sipType_QNetworkConfiguration, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_swap, doc_QNetworkConfiguration_swap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_connectTimeout, "connectTimeout(self) -> int");

extern "C" {static PyObject *meth_QNetworkConfiguration_connectTimeout(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_connectTimeout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->connectTimeout();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_connectTimeout, doc_QNetworkConfiguration_connectTimeout);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_setConnectTimeout, "setConnectTimeout(self, int) -> bool");

extern "C" {static PyObject *meth_QNetworkConfiguration_setConnectTimeout(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_setConnectTimeout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QNetworkConfiguration, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->setConnectTimeout(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_setConnectTimeout, doc_QNetworkConfiguration_setConnectTimeout);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QNetworkConfiguration___ne__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkConfiguration___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QNetworkConfiguration *sipCpp = reinterpret_cast< ::QNetworkConfiguration *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkConfiguration));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QNetworkConfiguration* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkConfiguration, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QNetworkConfiguration::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, ne_slot, sipType_QNetworkConfiguration, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QNetworkConfiguration___eq__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkConfiguration___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QNetworkConfiguration *sipCpp = reinterpret_cast< ::QNetworkConfiguration *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkConfiguration));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QNetworkConfiguration* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkConfiguration, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QNetworkConfiguration::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, eq_slot, sipType_QNetworkConfiguration, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkConfiguration(void *, int);}
static void release_QNetworkConfiguration(void *sipCppV, int)
{
    delete reinterpret_cast< ::QNetworkConfiguration *>(sipCppV);
}


extern "C" {static void *array_QNetworkConfiguration(Py_ssize_t);}
static void *array_QNetworkConfiguration(Py_ssize_t sipNrElem)
{
    return new  ::QNetworkConfiguration[sipNrElem];
}


extern "C" {static void assign_QNetworkConfiguration(void *, Py_ssize_t, void *);}
static void assign_QNetworkConfiguration(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QNetworkConfiguration *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QNetworkConfiguration *>(sipSrc);
}


extern "C" {static void *copy_QNetworkConfiguration(const void *, Py_ssize_t);}
static void *copy_QNetworkConfiguration(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QNetworkConfiguration(reinterpret_cast<const  ::QNetworkConfiguration *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNetworkConfiguration(sipSimpleWrapper *);}
static void dealloc_QNetworkConfiguration(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QNetworkConfiguration(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QNetworkConfiguration(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNetworkConfiguration(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QNetworkConfiguration *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QNetworkConfiguration();

            return sipCpp;
        }
    }

    {
        const  ::QNetworkConfiguration* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QNetworkConfiguration, &a0))
        {
            sipCpp = new  ::QNetworkConfiguration(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNetworkConfiguration[] = {
    {(void *)slot_QNetworkConfiguration___ne__, ne_slot},
    {(void *)slot_QNetworkConfiguration___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QNetworkConfiguration[] = {
    {sipName_bearerType, meth_QNetworkConfiguration_bearerType, METH_VARARGS, doc_QNetworkConfiguration_bearerType},
    {sipName_bearerTypeFamily, meth_QNetworkConfiguration_bearerTypeFamily, METH_VARARGS, doc_QNetworkConfiguration_bearerTypeFamily},
    {sipName_bearerTypeName, meth_QNetworkConfiguration_bearerTypeName, METH_VARARGS, doc_QNetworkConfiguration_bearerTypeName},
    {sipName_children, meth_QNetworkConfiguration_children, METH_VARARGS, doc_QNetworkConfiguration_children},
    {sipName_connectTimeout, meth_QNetworkConfiguration_connectTimeout, METH_VARARGS, doc_QNetworkConfiguration_connectTimeout},
    {sipName_identifier, meth_QNetworkConfiguration_identifier, METH_VARARGS, doc_QNetworkConfiguration_identifier},
    {sipName_isRoamingAvailable, meth_QNetworkConfiguration_isRoamingAvailable, METH_VARARGS, doc_QNetworkConfiguration_isRoamingAvailable},
    {sipName_isValid, meth_QNetworkConfiguration_isValid, METH_VARARGS, doc_QNetworkConfiguration_isValid},
    {sipName_name, meth_QNetworkConfiguration_name, METH_VARARGS, doc_QNetworkConfiguration_name},
    {sipName_purpose, meth_QNetworkConfiguration_purpose, METH_VARARGS, doc_QNetworkConfiguration_purpose},
    {sipName_setConnectTimeout, meth_QNetworkConfiguration_setConnectTimeout, METH_VARARGS, doc_QNetworkConfiguration_setConnectTimeout},
    {sipName_state, meth_QNetworkConfiguration_state, METH_VARARGS, doc_QNetworkConfiguration_state},
    {sipName_swap, meth_QNetworkConfiguration_swap, METH_VARARGS, doc_QNetworkConfiguration_swap},
    {sipName_type, meth_QNetworkConfiguration_type, METH_VARARGS, doc_QNetworkConfiguration_type}
};

static sipEnumMemberDef enummembers_QNetworkConfiguration[] = {
    {sipName_Active, static_cast<int>( ::QNetworkConfiguration::Active), 66},
    {sipName_Bearer2G, static_cast<int>( ::QNetworkConfiguration::Bearer2G), 64},
    {sipName_Bearer3G, static_cast<int>( ::QNetworkConfiguration::Bearer3G), 64},
    {sipName_Bearer4G, static_cast<int>( ::QNetworkConfiguration::Bearer4G), 64},
    {sipName_BearerBluetooth, static_cast<int>( ::QNetworkConfiguration::BearerBluetooth), 64},
    {sipName_BearerCDMA2000, static_cast<int>( ::QNetworkConfiguration::BearerCDMA2000), 64},
    {sipName_BearerEVDO, static_cast<int>( ::QNetworkConfiguration::BearerEVDO), 64},
    {sipName_BearerEthernet, static_cast<int>( ::QNetworkConfiguration::BearerEthernet), 64},
    {sipName_BearerHSPA, static_cast<int>( ::QNetworkConfiguration::BearerHSPA), 64},
    {sipName_BearerLTE, static_cast<int>( ::QNetworkConfiguration::BearerLTE), 64},
    {sipName_BearerUnknown, static_cast<int>( ::QNetworkConfiguration::BearerUnknown), 64},
    {sipName_BearerWCDMA, static_cast<int>( ::QNetworkConfiguration::BearerWCDMA), 64},
    {sipName_BearerWLAN, static_cast<int>( ::QNetworkConfiguration::BearerWLAN), 64},
    {sipName_BearerWiMAX, static_cast<int>( ::QNetworkConfiguration::BearerWiMAX), 64},
    {sipName_Defined, static_cast<int>( ::QNetworkConfiguration::Defined), 66},
    {sipName_Discovered, static_cast<int>( ::QNetworkConfiguration::Discovered), 66},
    {sipName_InternetAccessPoint, static_cast<int>( ::QNetworkConfiguration::InternetAccessPoint), 68},
    {sipName_Invalid, static_cast<int>( ::QNetworkConfiguration::Invalid), 68},
    {sipName_PrivatePurpose, static_cast<int>( ::QNetworkConfiguration::PrivatePurpose), 65},
    {sipName_PublicPurpose, static_cast<int>( ::QNetworkConfiguration::PublicPurpose), 65},
    {sipName_ServiceNetwork, static_cast<int>( ::QNetworkConfiguration::ServiceNetwork), 68},
    {sipName_ServiceSpecificPurpose, static_cast<int>( ::QNetworkConfiguration::ServiceSpecificPurpose), 65},
    {sipName_Undefined, static_cast<int>( ::QNetworkConfiguration::Undefined), 66},
    {sipName_UnknownPurpose, static_cast<int>( ::QNetworkConfiguration::UnknownPurpose), 65},
    {sipName_UserChoice, static_cast<int>( ::QNetworkConfiguration::UserChoice), 68},
};

PyDoc_STRVAR(doc_QNetworkConfiguration, "\1QNetworkConfiguration()\n"
"QNetworkConfiguration(QNetworkConfiguration)");


static pyqt5ClassPluginDef plugin_QNetworkConfiguration = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtNetwork_QNetworkConfiguration = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QNetworkConfiguration,
        SIP_NULLPTR,
        &plugin_QNetworkConfiguration
    },
    {
        sipNameNr_QNetworkConfiguration,
        {0, 0, 1},
        14, methods_QNetworkConfiguration,
        25, enummembers_QNetworkConfiguration,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QNetworkConfiguration,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QNetworkConfiguration,
    init_type_QNetworkConfiguration,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QNetworkConfiguration,
    assign_QNetworkConfiguration,
    array_QNetworkConfiguration,
    copy_QNetworkConfiguration,
    release_QNetworkConfiguration,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
