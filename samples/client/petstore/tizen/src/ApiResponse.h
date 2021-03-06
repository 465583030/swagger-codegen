/*
 * Copyright (c) 2016 Samsung Electronics Co., Ltd All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * ApiResponse.h
 *
 * 
 */

#ifndef _ApiResponse_H_
#define _ApiResponse_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 */

class ApiResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	ApiResponse();
	ApiResponse(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~ApiResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getCode();

	/*! \brief Set 
	 */
	void setCode(int  code);
	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string  type);
	/*! \brief Get 
	 */
	std::string getMessage();

	/*! \brief Set 
	 */
	void setMessage(std::string  message);

private:
	int code;
	std::string type;
	std::string message;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _ApiResponse_H_ */
