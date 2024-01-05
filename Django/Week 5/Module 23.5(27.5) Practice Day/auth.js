const handleregistration = (event) => {
    event.preventDefault();
    const username = getValue("username");
    const firstname = getValue("firstname")
    const lastname = getValue("lastname")
    const email = getValue("email")
    const password = getValue("password")
    const confirmpassword = getValue("confirmpassword")
    const Streetadress = getValue("Streetadress")
    const zip = getValue("zip")
    const place = getValue("place")
    const number = getValue("number")
    const Country = getValue("Country")
    const info=
    {
        username,
        firstname,
        lastname,
         email,
         password,
         confirmpassword,
         Streetadress,
         Country,
         zip,
         place,
         number
        };

        if (password === confirmpassword){
            // if(/^(?=.*[A-Z])(?=.*[a-z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$/.test(password)){
                fetch('https://fakestoreapi.com/users',{
            method:"POST",
            headers:{"content-type": "application/json"},

            body:JSON.stringify(
                {
                    email:email,
                    username:username,
                    password:password,
                    name:{
                        firstname: firstname,
                        lastname:lastname
                    },
                    address:{
                        city:Streetadress,
                        street:Streetadress,
                        number:3,
                        zipcode:zip,
                        geolocation:{
                            lat:'-37.3159',
                            long:'81.1496'
                        }
                    },
                    phone:number
                }
            )
        })
            .then(res=>res.json())
            .then(json=>console.log(json))
                
            }
            // else{
            //     alert("Password must have 8 chareacter, symbol, etc")
            // }
        else{
            alert("Password are didn't match")
        }
    
}

const getValue = (id) =>{
    const value = document.getElementById(id).value;
    return value;
}