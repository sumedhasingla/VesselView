/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// Qt includes
#include <QtPlugin>

// TubeRadius Logic includes
#include <vtkSlicerTubeRadiusLogic.h>

// TubeRadius includes
#include "qSlicerTubeRadiusModule.h"
#include "qSlicerTubeRadiusModuleWidget.h"

//-----------------------------------------------------------------------------
Q_EXPORT_PLUGIN2(qSlicerTubeRadiusModule, qSlicerTubeRadiusModule);

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerTubeRadiusModulePrivate
{
public:
  qSlicerTubeRadiusModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerTubeRadiusModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerTubeRadiusModulePrivate::qSlicerTubeRadiusModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerTubeRadiusModule methods

//-----------------------------------------------------------------------------
qSlicerTubeRadiusModule::qSlicerTubeRadiusModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerTubeRadiusModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerTubeRadiusModule::~qSlicerTubeRadiusModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerTubeRadiusModule::helpText() const
{
  return "This is a loadable module that can be bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerTubeRadiusModule::acknowledgementText() const
{
  return "This work was partially funded by NIH grant NXNNXXNNNNNN-NNXN";
}

//-----------------------------------------------------------------------------
QStringList qSlicerTubeRadiusModule::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("John Doe (AnyWare Corp.)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerTubeRadiusModule::icon() const
{
  return QIcon(":/Icons/TubeRadius.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerTubeRadiusModule::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicerTubeRadiusModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerTubeRadiusModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerTubeRadiusModule
::createWidgetRepresentation()
{
  return new qSlicerTubeRadiusModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerTubeRadiusModule::createLogic()
{
  return vtkSlicerTubeRadiusLogic::New();
}
