pipeline {
	agent any
	
	 stages {
		stage("Compile stage") {
			steps {
				sh "g++ -Wall -Wextra -Wpedantic --std=c++17 project_source_file.cpp -o execs/project_source_file" 
			}
		}
		
		stage("Testing stage") {
			steps {
				sh "echo Testing"
			}
		}
		
		stage("Deployment stage") {
			steps {
				sh "./execs/project_source_file"
			}
		}
	 }
}
