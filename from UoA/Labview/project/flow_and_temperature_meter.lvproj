<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="11008008">
	<Item Name="My Computer" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="cool_amp.vi" Type="VI" URL="../../cool_amp.vi"/>
		<Item Name="Dependencies" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
				<Item Name="BuildHelpPath.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/BuildHelpPath.vi"/>
				<Item Name="Check Special Tags.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Check Special Tags.vi"/>
				<Item Name="Clear Errors.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Clear Errors.vi"/>
				<Item Name="Convert property node font to graphics font.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Convert property node font to graphics font.vi"/>
				<Item Name="Details Display Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Details Display Dialog.vi"/>
				<Item Name="DialogType.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/DialogType.ctl"/>
				<Item Name="DialogTypeEnum.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/DialogTypeEnum.ctl"/>
				<Item Name="Error Code Database.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Code Database.vi"/>
				<Item Name="ErrWarn.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/ErrWarn.ctl"/>
				<Item Name="eventvkey.ctl" Type="VI" URL="/&lt;vilib&gt;/event_ctls.llb/eventvkey.ctl"/>
				<Item Name="Find Tag.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Find Tag.vi"/>
				<Item Name="Format Message String.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Format Message String.vi"/>
				<Item Name="General Error Handler CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler CORE.vi"/>
				<Item Name="General Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler.vi"/>
				<Item Name="Get String Text Bounds.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Get String Text Bounds.vi"/>
				<Item Name="Get Text Rect.vi" Type="VI" URL="/&lt;vilib&gt;/picture/picture.llb/Get Text Rect.vi"/>
				<Item Name="GetHelpDir.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetHelpDir.vi"/>
				<Item Name="GetRTHostConnectedProp.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetRTHostConnectedProp.vi"/>
				<Item Name="LabVIEW Interface for Arduino.lvlib" Type="Library" URL="/&lt;vilib&gt;/LabVIEW Interface for Arduino/LabVIEW Interface for Arduino.lvlib"/>
				<Item Name="Longest Line Length in Pixels.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Longest Line Length in Pixels.vi"/>
				<Item Name="LVBoundsTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVBoundsTypeDef.ctl"/>
				<Item Name="NI_AALBase.lvlib" Type="Library" URL="/&lt;vilib&gt;/Analysis/NI_AALBase.lvlib"/>
				<Item Name="Not Found Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Not Found Dialog.vi"/>
				<Item Name="Search and Replace Pattern.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Search and Replace Pattern.vi"/>
				<Item Name="Set Bold Text.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set Bold Text.vi"/>
				<Item Name="Set String Value.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set String Value.vi"/>
				<Item Name="Simple Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Simple Error Handler.vi"/>
				<Item Name="TagReturnType.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/TagReturnType.ctl"/>
				<Item Name="Three Button Dialog CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog CORE.vi"/>
				<Item Name="Three Button Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog.vi"/>
				<Item Name="Trim Whitespace.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Trim Whitespace.vi"/>
				<Item Name="VISA Configure Serial Port" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port"/>
				<Item Name="VISA Configure Serial Port (Instr).vi" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port (Instr).vi"/>
				<Item Name="VISA Configure Serial Port (Serial Instr).vi" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port (Serial Instr).vi"/>
				<Item Name="whitespace.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/whitespace.ctl"/>
			</Item>
			<Item Name="Init_joe.vi" Type="VI" URL="../../SubVis/Init_joe.vi"/>
			<Item Name="lvanlys.dll" Type="Document" URL="../../../../../../Program Files/National Instruments/LabVIEW 2011/resource/lvanlys.dll"/>
			<Item Name="read_flowmeter_Data.vi" Type="VI" URL="../../SubVis/read_flowmeter_Data.vi"/>
			<Item Name="read_serial_string.vi" Type="VI" URL="../../SubVis/read_serial_string.vi"/>
			<Item Name="safe_data.vi" Type="VI" URL="../../SubVis/safe_data.vi"/>
			<Item Name="thermistor_read_Joe_2.vi" Type="VI" URL="../../SubVis/thermistor_read_Joe_2.vi"/>
		</Item>
		<Item Name="Build Specifications" Type="Build">
			<Item Name="Cool Amps" Type="EXE">
				<Property Name="App_copyErrors" Type="Bool">true</Property>
				<Property Name="App_INI_aliasGUID" Type="Str">{1529839C-C109-4AD0-8E5D-107FE5FAB0B2}</Property>
				<Property Name="App_INI_GUID" Type="Str">{EA855684-DF57-424D-92DF-BCFAD0232D97}</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{79344FCE-07B4-4DBA-AD7C-95207F194929}</Property>
				<Property Name="Bld_buildSpecName" Type="Str">Cool Amps</Property>
				<Property Name="Bld_excludeLibraryItems" Type="Bool">true</Property>
				<Property Name="Bld_excludePolymorphicVIs" Type="Bool">true</Property>
				<Property Name="Bld_localDestDir" Type="Path">../builds/exe</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToCommon</Property>
				<Property Name="Bld_modifyLibraryFile" Type="Bool">true</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{C2E50ACD-5C2D-4221-B0BF-58CAC25F298C}</Property>
				<Property Name="Destination[0].destName" Type="Str">Cool Amps.exe</Property>
				<Property Name="Destination[0].path" Type="Path">../builds/exe/Cool Amps.exe</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">Support Directory</Property>
				<Property Name="Destination[1].path" Type="Path">../builds/exe/data</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Source[0].itemID" Type="Str">{7735D253-D438-494D-AE65-C11A114E465D}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/My Computer/cool_amp.vi</Property>
				<Property Name="Source[1].properties[0].type" Type="Str">Run when opened</Property>
				<Property Name="Source[1].properties[0].value" Type="Bool">false</Property>
				<Property Name="Source[1].propertiesCount" Type="Int">1</Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[1].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">2</Property>
				<Property Name="TgtF_autoIncrement" Type="Bool">true</Property>
				<Property Name="TgtF_fileDescription" Type="Str">Cool Amps</Property>
				<Property Name="TgtF_fileVersion.build" Type="Int">1</Property>
				<Property Name="TgtF_fileVersion.major" Type="Int">1</Property>
				<Property Name="TgtF_internalName" Type="Str">Cool Amps</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">Copyright © 2012 </Property>
				<Property Name="TgtF_productName" Type="Str">Cool Amps</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{5399E21E-BA71-4FCC-B8B1-225215EBF460}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">Cool Amps.exe</Property>
			</Item>
			<Item Name="cool_amp" Type="Installer">
				<Property Name="Destination[0].name" Type="Str">Cool Amp</Property>
				<Property Name="Destination[0].parent" Type="Str">{3912416A-D2E5-411B-AFEE-B63654D690C0}</Property>
				<Property Name="Destination[0].tag" Type="Str">{CBAC81FC-530D-4B14-82E4-00367A6E0403}</Property>
				<Property Name="Destination[0].type" Type="Str">userFolder</Property>
				<Property Name="DestinationCount" Type="Int">1</Property>
				<Property Name="DistPart[0].flavorID" Type="Str">DefaultFull</Property>
				<Property Name="DistPart[0].productID" Type="Str">{8063690D-9E7F-4879-87F8-CD140194C62A}</Property>
				<Property Name="DistPart[0].productName" Type="Str">NI LabVIEW Run-Time Engine 2011 SP1</Property>
				<Property Name="DistPart[0].upgradeCode" Type="Str">{6AD6C111-233B-4924-A3BF-E4813FE23C7A}</Property>
				<Property Name="DistPartCount" Type="Int">1</Property>
				<Property Name="INST_autoIncrement" Type="Bool">true</Property>
				<Property Name="INST_buildLocation" Type="Path">../builds</Property>
				<Property Name="INST_buildLocation.type" Type="Str">relativeToCommon</Property>
				<Property Name="INST_buildSpecName" Type="Str">cool_amp</Property>
				<Property Name="INST_defaultDir" Type="Str">{CBAC81FC-530D-4B14-82E4-00367A6E0403}</Property>
				<Property Name="INST_productName" Type="Str">cool_amp.exe</Property>
				<Property Name="INST_productVersion" Type="Str">1.0.2</Property>
				<Property Name="InstSpecBitness" Type="Str">32-bit</Property>
				<Property Name="InstSpecVersion" Type="Str">11018013</Property>
				<Property Name="MSI_arpContact" Type="Str">johannesrebling@gmail.com</Property>
				<Property Name="MSI_distID" Type="Str">{A3D9CE36-14D0-4C47-9180-782312B41953}</Property>
				<Property Name="MSI_osCheck" Type="Int">0</Property>
				<Property Name="MSI_upgradeCode" Type="Str">{9672CD1F-B4F2-4192-BAA9-A01943C943E5}</Property>
				<Property Name="MSI_windowTitle" Type="Str">Hello my friend, stay a while an listen...</Property>
				<Property Name="RegDest[0].dirName" Type="Str">Software</Property>
				<Property Name="RegDest[0].dirTag" Type="Str">{DDFAFC8B-E728-4AC8-96DE-B920EBB97A86}</Property>
				<Property Name="RegDest[0].parentTag" Type="Str">2</Property>
				<Property Name="RegDestCount" Type="Int">1</Property>
				<Property Name="Source[0].dest" Type="Str">{CBAC81FC-530D-4B14-82E4-00367A6E0403}</Property>
				<Property Name="Source[0].name" Type="Str">cool_amp.vi</Property>
				<Property Name="Source[0].Shortcut[0].destIndex" Type="Int">1</Property>
				<Property Name="Source[0].Shortcut[0].name" Type="Str">Cool Amp</Property>
				<Property Name="Source[0].Shortcut[0].subDir" Type="Str"></Property>
				<Property Name="Source[0].ShortcutCount" Type="Int">1</Property>
				<Property Name="Source[0].tag" Type="Ref">/My Computer/cool_amp.vi</Property>
				<Property Name="Source[0].type" Type="Str">File</Property>
				<Property Name="Source[1].dest" Type="Str">{CBAC81FC-530D-4B14-82E4-00367A6E0403}</Property>
				<Property Name="Source[1].File[0].dest" Type="Str">{CBAC81FC-530D-4B14-82E4-00367A6E0403}</Property>
				<Property Name="Source[1].File[0].name" Type="Str">Cool Amps.exe</Property>
				<Property Name="Source[1].File[0].Shortcut[0].destIndex" Type="Int">0</Property>
				<Property Name="Source[1].File[0].Shortcut[0].name" Type="Str">Cool Amps</Property>
				<Property Name="Source[1].File[0].Shortcut[0].subDir" Type="Str">cool_amp.exe</Property>
				<Property Name="Source[1].File[0].ShortcutCount" Type="Int">1</Property>
				<Property Name="Source[1].File[0].tag" Type="Str">{5399E21E-BA71-4FCC-B8B1-225215EBF460}</Property>
				<Property Name="Source[1].FileCount" Type="Int">1</Property>
				<Property Name="Source[1].name" Type="Str">Cool Amps</Property>
				<Property Name="Source[1].tag" Type="Ref">/My Computer/Build Specifications/Cool Amps</Property>
				<Property Name="Source[1].type" Type="Str">EXE</Property>
				<Property Name="SourceCount" Type="Int">2</Property>
			</Item>
		</Item>
	</Item>
</Project>
