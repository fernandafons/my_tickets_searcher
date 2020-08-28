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

#include "sipAPIQtWidgets.h"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qscrollerproperties.sip"
#include <qscrollerproperties.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQScrollerProperties.cpp"

#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQScrollerProperties.cpp"


class sipQScrollerProperties : public  ::QScrollerProperties
{
public:
    sipQScrollerProperties();
    sipQScrollerProperties(const  ::QScrollerProperties&);
    ~sipQScrollerProperties();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQScrollerProperties(const sipQScrollerProperties &);
    sipQScrollerProperties &operator = (const sipQScrollerProperties &);
};

sipQScrollerProperties::sipQScrollerProperties():  ::QScrollerProperties(), sipPySelf(SIP_NULLPTR)
{
}

sipQScrollerProperties::sipQScrollerProperties(const  ::QScrollerProperties& a0):  ::QScrollerProperties(a0), sipPySelf(SIP_NULLPTR)
{
}

sipQScrollerProperties::~sipQScrollerProperties()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QScrollerProperties_setDefaultScrollerProperties, "setDefaultScrollerProperties(QScrollerProperties)");

extern "C" {static PyObject *meth_QScrollerProperties_setDefaultScrollerProperties(PyObject *, PyObject *);}
static PyObject *meth_QScrollerProperties_setDefaultScrollerProperties(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QScrollerProperties* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QScrollerProperties, &a0))
        {
             ::QScrollerProperties::setDefaultScrollerProperties(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QScrollerProperties, sipName_setDefaultScrollerProperties, doc_QScrollerProperties_setDefaultScrollerProperties);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QScrollerProperties_unsetDefaultScrollerProperties, "unsetDefaultScrollerProperties()");

extern "C" {static PyObject *meth_QScrollerProperties_unsetDefaultScrollerProperties(PyObject *, PyObject *);}
static PyObject *meth_QScrollerProperties_unsetDefaultScrollerProperties(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QScrollerProperties::unsetDefaultScrollerProperties();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QScrollerProperties, sipName_unsetDefaultScrollerProperties, doc_QScrollerProperties_unsetDefaultScrollerProperties);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QScrollerProperties_scrollMetric, "scrollMetric(self, QScrollerProperties.ScrollMetric) -> Any");

extern "C" {static PyObject *meth_QScrollerProperties_scrollMetric(PyObject *, PyObject *);}
static PyObject *meth_QScrollerProperties_scrollMetric(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QScrollerProperties::ScrollMetric a0;
        const  ::QScrollerProperties *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QScrollerProperties, &sipCpp, sipType_QScrollerProperties_ScrollMetric, &a0))
        {
             ::QVariant*sipRes;

            sipRes = new  ::QVariant(sipCpp->scrollMetric(a0));

            return sipConvertFromNewType(sipRes,sipType_QVariant,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QScrollerProperties, sipName_scrollMetric, doc_QScrollerProperties_scrollMetric);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QScrollerProperties_setScrollMetric, "setScrollMetric(self, QScrollerProperties.ScrollMetric, Any)");

extern "C" {static PyObject *meth_QScrollerProperties_setScrollMetric(PyObject *, PyObject *);}
static PyObject *meth_QScrollerProperties_setScrollMetric(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QScrollerProperties::ScrollMetric a0;
        const  ::QVariant* a1;
        int a1State = 0;
         ::QScrollerProperties *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ1", &sipSelf, sipType_QScrollerProperties, &sipCpp, sipType_QScrollerProperties_ScrollMetric, &a0, sipType_QVariant, &a1, &a1State))
        {
            sipCpp->setScrollMetric(a0,*a1);
            sipReleaseType(const_cast< ::QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QScrollerProperties, sipName_setScrollMetric, doc_QScrollerProperties_setScrollMetric);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QScrollerProperties___ne__(PyObject *,PyObject *);}
static PyObject *slot_QScrollerProperties___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QScrollerProperties *sipCpp = reinterpret_cast< ::QScrollerProperties *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScrollerProperties));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QScrollerProperties* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QScrollerProperties, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QScrollerProperties::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, ne_slot, sipType_QScrollerProperties, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QScrollerProperties___eq__(PyObject *,PyObject *);}
static PyObject *slot_QScrollerProperties___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QScrollerProperties *sipCpp = reinterpret_cast< ::QScrollerProperties *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScrollerProperties));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QScrollerProperties* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QScrollerProperties, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QScrollerProperties::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, eq_slot, sipType_QScrollerProperties, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QScrollerProperties(void *, int);}
static void release_QScrollerProperties(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQScrollerProperties *>(sipCppV);
    else
        delete reinterpret_cast< ::QScrollerProperties *>(sipCppV);
}


extern "C" {static void *array_QScrollerProperties(Py_ssize_t);}
static void *array_QScrollerProperties(Py_ssize_t sipNrElem)
{
    return new  ::QScrollerProperties[sipNrElem];
}


extern "C" {static void assign_QScrollerProperties(void *, Py_ssize_t, void *);}
static void assign_QScrollerProperties(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QScrollerProperties *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QScrollerProperties *>(sipSrc);
}


extern "C" {static void *copy_QScrollerProperties(const void *, Py_ssize_t);}
static void *copy_QScrollerProperties(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QScrollerProperties(reinterpret_cast<const  ::QScrollerProperties *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QScrollerProperties(sipSimpleWrapper *);}
static void dealloc_QScrollerProperties(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQScrollerProperties *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QScrollerProperties(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QScrollerProperties(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QScrollerProperties(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQScrollerProperties *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new sipQScrollerProperties();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QScrollerProperties* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QScrollerProperties, &a0))
        {
            sipCpp = new sipQScrollerProperties(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QScrollerProperties[] = {
    {(void *)slot_QScrollerProperties___ne__, ne_slot},
    {(void *)slot_QScrollerProperties___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QScrollerProperties[] = {
    {sipName_scrollMetric, meth_QScrollerProperties_scrollMetric, METH_VARARGS, doc_QScrollerProperties_scrollMetric},
    {sipName_setDefaultScrollerProperties, meth_QScrollerProperties_setDefaultScrollerProperties, METH_VARARGS, doc_QScrollerProperties_setDefaultScrollerProperties},
    {sipName_setScrollMetric, meth_QScrollerProperties_setScrollMetric, METH_VARARGS, doc_QScrollerProperties_setScrollMetric},
    {sipName_unsetDefaultScrollerProperties, meth_QScrollerProperties_unsetDefaultScrollerProperties, METH_VARARGS, doc_QScrollerProperties_unsetDefaultScrollerProperties}
};

static sipEnumMemberDef enummembers_QScrollerProperties[] = {
    {sipName_AcceleratingFlickMaximumTime, static_cast<int>( ::QScrollerProperties::AcceleratingFlickMaximumTime), 268},
    {sipName_AcceleratingFlickSpeedupFactor, static_cast<int>( ::QScrollerProperties::AcceleratingFlickSpeedupFactor), 268},
    {sipName_AxisLockThreshold, static_cast<int>( ::QScrollerProperties::AxisLockThreshold), 268},
    {sipName_DecelerationFactor, static_cast<int>( ::QScrollerProperties::DecelerationFactor), 268},
    {sipName_DragStartDistance, static_cast<int>( ::QScrollerProperties::DragStartDistance), 268},
    {sipName_DragVelocitySmoothingFactor, static_cast<int>( ::QScrollerProperties::DragVelocitySmoothingFactor), 268},
    {sipName_Fps20, static_cast<int>( ::QScrollerProperties::Fps20), 266},
    {sipName_Fps30, static_cast<int>( ::QScrollerProperties::Fps30), 266},
    {sipName_Fps60, static_cast<int>( ::QScrollerProperties::Fps60), 266},
    {sipName_FrameRate, static_cast<int>( ::QScrollerProperties::FrameRate), 268},
    {sipName_HorizontalOvershootPolicy, static_cast<int>( ::QScrollerProperties::HorizontalOvershootPolicy), 268},
    {sipName_MaximumClickThroughVelocity, static_cast<int>( ::QScrollerProperties::MaximumClickThroughVelocity), 268},
    {sipName_MaximumVelocity, static_cast<int>( ::QScrollerProperties::MaximumVelocity), 268},
    {sipName_MinimumVelocity, static_cast<int>( ::QScrollerProperties::MinimumVelocity), 268},
    {sipName_MousePressEventDelay, static_cast<int>( ::QScrollerProperties::MousePressEventDelay), 268},
    {sipName_OvershootAlwaysOff, static_cast<int>( ::QScrollerProperties::OvershootAlwaysOff), 267},
    {sipName_OvershootAlwaysOn, static_cast<int>( ::QScrollerProperties::OvershootAlwaysOn), 267},
    {sipName_OvershootDragDistanceFactor, static_cast<int>( ::QScrollerProperties::OvershootDragDistanceFactor), 268},
    {sipName_OvershootDragResistanceFactor, static_cast<int>( ::QScrollerProperties::OvershootDragResistanceFactor), 268},
    {sipName_OvershootScrollDistanceFactor, static_cast<int>( ::QScrollerProperties::OvershootScrollDistanceFactor), 268},
    {sipName_OvershootScrollTime, static_cast<int>( ::QScrollerProperties::OvershootScrollTime), 268},
    {sipName_OvershootWhenScrollable, static_cast<int>( ::QScrollerProperties::OvershootWhenScrollable), 267},
    {sipName_ScrollMetricCount, static_cast<int>( ::QScrollerProperties::ScrollMetricCount), 268},
    {sipName_ScrollingCurve, static_cast<int>( ::QScrollerProperties::ScrollingCurve), 268},
    {sipName_SnapPositionRatio, static_cast<int>( ::QScrollerProperties::SnapPositionRatio), 268},
    {sipName_SnapTime, static_cast<int>( ::QScrollerProperties::SnapTime), 268},
    {sipName_Standard, static_cast<int>( ::QScrollerProperties::Standard), 266},
    {sipName_VerticalOvershootPolicy, static_cast<int>( ::QScrollerProperties::VerticalOvershootPolicy), 268},
};

PyDoc_STRVAR(doc_QScrollerProperties, "\1QScrollerProperties()\n"
"QScrollerProperties(QScrollerProperties)");


static pyqt5ClassPluginDef plugin_QScrollerProperties = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QScrollerProperties = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QScrollerProperties,
        SIP_NULLPTR,
        &plugin_QScrollerProperties
    },
    {
        sipNameNr_QScrollerProperties,
        {0, 0, 1},
        4, methods_QScrollerProperties,
        28, enummembers_QScrollerProperties,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QScrollerProperties,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QScrollerProperties,
    init_type_QScrollerProperties,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QScrollerProperties,
    assign_QScrollerProperties,
    array_QScrollerProperties,
    copy_QScrollerProperties,
    release_QScrollerProperties,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};