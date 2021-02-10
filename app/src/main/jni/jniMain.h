//
// Created by 박시온 on 2/9/21.
//

#ifndef TESTJNI_JNIMAIN_H
#define TESTJNI_JNIMAIN_H

import org.apache.tools.ant.taskdefs.condition.Os
apply plugin: 'com.android.application

class jniMain {

    def getNdkBuildPath() {
            Properties properties = new Properties()
            properties.load(project.rootProject.file('local.properties').newDataInputStream())

            def command = properties.getProperty('ndk.dir')
            if (Os.isFamily(Os.FAMILY_WINDOWS)) {
                    command += "\\ndk-build.cmd"
            } else {
                    command += "/ndk-build"
            }
            return command
     }
};



#endif //TESTJNI_JNIMAIN_H
