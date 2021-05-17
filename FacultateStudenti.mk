##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=FacultateStudenti
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/noxium/Documents/codelite
ProjectPath            :=/home/noxium/Documents/codelite/FacultateStudenti
IntermediateDirectory  :=../build-$(ConfigurationName)/FacultateStudenti
OutDir                 :=../build-$(ConfigurationName)/FacultateStudenti
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Noxium
Date                   :=17/05/21
CodeLitePath           :=/home/noxium/.codelite
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=../build-$(ConfigurationName)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/FacultateStudenti/Examen.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/FacultateStudenti/Partial.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/FacultateStudenti/ExamType.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/FacultateStudenti/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/FacultateStudenti/Examen_Final.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/FacultateStudenti/Quiz.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/FacultateStudenti/CatalogIndividual.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/FacultateStudenti/Elev.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/FacultateStudenti/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/FacultateStudenti"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/FacultateStudenti"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/FacultateStudenti/.d:
	@mkdir -p "../build-$(ConfigurationName)/FacultateStudenti"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/FacultateStudenti/Examen.cpp$(ObjectSuffix): Examen.cpp ../build-$(ConfigurationName)/FacultateStudenti/Examen.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/noxium/Documents/codelite/FacultateStudenti/Examen.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Examen.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/FacultateStudenti/Examen.cpp$(DependSuffix): Examen.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/FacultateStudenti/Examen.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/FacultateStudenti/Examen.cpp$(DependSuffix) -MM Examen.cpp

../build-$(ConfigurationName)/FacultateStudenti/Examen.cpp$(PreprocessSuffix): Examen.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/FacultateStudenti/Examen.cpp$(PreprocessSuffix) Examen.cpp

../build-$(ConfigurationName)/FacultateStudenti/Partial.cpp$(ObjectSuffix): Partial.cpp ../build-$(ConfigurationName)/FacultateStudenti/Partial.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/noxium/Documents/codelite/FacultateStudenti/Partial.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Partial.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/FacultateStudenti/Partial.cpp$(DependSuffix): Partial.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/FacultateStudenti/Partial.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/FacultateStudenti/Partial.cpp$(DependSuffix) -MM Partial.cpp

../build-$(ConfigurationName)/FacultateStudenti/Partial.cpp$(PreprocessSuffix): Partial.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/FacultateStudenti/Partial.cpp$(PreprocessSuffix) Partial.cpp

../build-$(ConfigurationName)/FacultateStudenti/ExamType.cpp$(ObjectSuffix): ExamType.cpp ../build-$(ConfigurationName)/FacultateStudenti/ExamType.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/noxium/Documents/codelite/FacultateStudenti/ExamType.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ExamType.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/FacultateStudenti/ExamType.cpp$(DependSuffix): ExamType.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/FacultateStudenti/ExamType.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/FacultateStudenti/ExamType.cpp$(DependSuffix) -MM ExamType.cpp

../build-$(ConfigurationName)/FacultateStudenti/ExamType.cpp$(PreprocessSuffix): ExamType.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/FacultateStudenti/ExamType.cpp$(PreprocessSuffix) ExamType.cpp

../build-$(ConfigurationName)/FacultateStudenti/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/FacultateStudenti/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/noxium/Documents/codelite/FacultateStudenti/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/FacultateStudenti/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/FacultateStudenti/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/FacultateStudenti/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/FacultateStudenti/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/FacultateStudenti/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/FacultateStudenti/Examen_Final.cpp$(ObjectSuffix): Examen_Final.cpp ../build-$(ConfigurationName)/FacultateStudenti/Examen_Final.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/noxium/Documents/codelite/FacultateStudenti/Examen_Final.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Examen_Final.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/FacultateStudenti/Examen_Final.cpp$(DependSuffix): Examen_Final.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/FacultateStudenti/Examen_Final.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/FacultateStudenti/Examen_Final.cpp$(DependSuffix) -MM Examen_Final.cpp

../build-$(ConfigurationName)/FacultateStudenti/Examen_Final.cpp$(PreprocessSuffix): Examen_Final.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/FacultateStudenti/Examen_Final.cpp$(PreprocessSuffix) Examen_Final.cpp

../build-$(ConfigurationName)/FacultateStudenti/Quiz.cpp$(ObjectSuffix): Quiz.cpp ../build-$(ConfigurationName)/FacultateStudenti/Quiz.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/noxium/Documents/codelite/FacultateStudenti/Quiz.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Quiz.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/FacultateStudenti/Quiz.cpp$(DependSuffix): Quiz.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/FacultateStudenti/Quiz.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/FacultateStudenti/Quiz.cpp$(DependSuffix) -MM Quiz.cpp

../build-$(ConfigurationName)/FacultateStudenti/Quiz.cpp$(PreprocessSuffix): Quiz.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/FacultateStudenti/Quiz.cpp$(PreprocessSuffix) Quiz.cpp

../build-$(ConfigurationName)/FacultateStudenti/CatalogIndividual.cpp$(ObjectSuffix): CatalogIndividual.cpp ../build-$(ConfigurationName)/FacultateStudenti/CatalogIndividual.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/noxium/Documents/codelite/FacultateStudenti/CatalogIndividual.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CatalogIndividual.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/FacultateStudenti/CatalogIndividual.cpp$(DependSuffix): CatalogIndividual.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/FacultateStudenti/CatalogIndividual.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/FacultateStudenti/CatalogIndividual.cpp$(DependSuffix) -MM CatalogIndividual.cpp

../build-$(ConfigurationName)/FacultateStudenti/CatalogIndividual.cpp$(PreprocessSuffix): CatalogIndividual.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/FacultateStudenti/CatalogIndividual.cpp$(PreprocessSuffix) CatalogIndividual.cpp

../build-$(ConfigurationName)/FacultateStudenti/Elev.cpp$(ObjectSuffix): Elev.cpp ../build-$(ConfigurationName)/FacultateStudenti/Elev.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/noxium/Documents/codelite/FacultateStudenti/Elev.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Elev.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/FacultateStudenti/Elev.cpp$(DependSuffix): Elev.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/FacultateStudenti/Elev.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/FacultateStudenti/Elev.cpp$(DependSuffix) -MM Elev.cpp

../build-$(ConfigurationName)/FacultateStudenti/Elev.cpp$(PreprocessSuffix): Elev.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/FacultateStudenti/Elev.cpp$(PreprocessSuffix) Elev.cpp


-include ../build-$(ConfigurationName)/FacultateStudenti//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


